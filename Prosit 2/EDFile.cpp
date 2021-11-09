#include <iostream>
#include <fstream>
#include <string>
#include "EDFile.h"
using namespace std;

EDFile::EDFile(string fileName) : m_fileName(fileName)
{

}

string EDFile::read()
{
	m_file.open(m_fileName);
	string fileContent((istreambuf_iterator<char>(m_file)), istreambuf_iterator<char>());
	m_file.close();
	return fileContent;
}

void EDFile::write(string fileContent)
{
	m_file.open(m_fileName);
	m_file << fileContent;
	m_file.close();
}

void EDFile::crypt()
{
	int type(0);
	int mode(0);

	cout << "Quel mode voulez-vous utiliser?\n\t1) Cryptage\n\t2) Decryptage\nVous choisissez: ";
	cin >> type;

	string modeStr = "d'encryptage";
	if (type == 1) mode = 1;
	else if (type == 2) {
		mode = 2;
		modeStr = "de decryptage";
	}
	else {
		cout << "Execution annulee." << endl;
		return;
	}

	type = 0;
	cout << "Quel type " << modeStr << " voulez-vous ? \n\t1) Cesar\n\t2) xOR\n\t3) Cesar puis xOR\n\t4) xOR puis Cesar\n\t5) Annuler\nVous choisissez : ";
	cin >> type;

	switch (type) {
	case 1: {
		string fileContent(""), encryptedFileContent("");
		fileContent = read();
		encryptedFileContent = cesar(fileContent, mode);
		write(encryptedFileContent);
		break;
	}
	case 2: {
		string fileContent(""), encryptedFileContent("");
		fileContent = read();
		encryptedFileContent = xOR(fileContent, mode);
		write(encryptedFileContent);
		break;
	}
	case 3: {
		string fileContent(""), encryptedFileContent("");
		fileContent = read();
		encryptedFileContent = cesar(fileContent, mode);
		encryptedFileContent = xOR(encryptedFileContent, mode);
		write(encryptedFileContent);
		break;
	}
	case 4: {
		string fileContent(""), encryptedFileContent("");
		fileContent = read();
		encryptedFileContent = xOR(fileContent, mode);
		encryptedFileContent = cesar(encryptedFileContent, mode);
		write(encryptedFileContent);
		break;
	}
	default: {
		cout << "Execution annulee." << endl;
		break;
	}
	}
}

string EDFile::cesar(string fileContent, int mode)
{
	if (mode == 1) {
		string encryptedFileContent;
		int offset(0);
		cout << "Quel decalage voulez-vous utiliser? ";
		cin >> offset;
		for (string::iterator it = fileContent.begin(); it != fileContent.end(); ++it) {
			if (isupper(*it)) encryptedFileContent += (*it + offset - 'A') % 26 + 'A';
			else if (islower(*it)) encryptedFileContent += (*it + offset - 'a') % 26 + 'a';
			else encryptedFileContent += *it;
		}
		return encryptedFileContent;
	}
	else {
		string encryptedFileContent;
		int offset(0);
		cout << "Quel decalage voulez-vous utiliser? ";
		cin >> offset;
		for (string::iterator it = fileContent.begin(); it != fileContent.end(); ++it) {
			if (isupper(*it)) encryptedFileContent += (*it - offset - 'A') % 26 + 'A';
			else if (islower(*it)) encryptedFileContent += (*it - offset - 'a') % 26 + 'a';
			else encryptedFileContent += *it;
		}
		return encryptedFileContent;
	}
}

string EDFile::xOR(string fileContent, int mode)
{
	string encryptedFileContent;
	char key = 'x';
	cout << "Quel clé voulez-vous utiliser (1 caractere)? ";
	cin >> key;
	for (int i = 0; i < fileContent.size(); i++) {
		encryptedFileContent += fileContent[i] ^ (int(key) + 1) % 20;
	}
	return encryptedFileContent;
}