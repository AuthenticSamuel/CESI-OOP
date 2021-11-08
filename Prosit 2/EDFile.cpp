#include <iostream>
#include <fstream>
#include <string>
#include "EDFile.h"
using namespace std;

EDFile::EDFile(string sourceFileName, string destinationFileName) : m_srcFileName(sourceFileName), m_destFileName(destinationFileName)
{

}

string EDFile::read()
{
	m_srcFile.open(m_srcFileName);
	string fileContent((istreambuf_iterator<char>(m_srcFile)), istreambuf_iterator<char>()), encryptedFileContent;
	m_srcFile.close();
	return fileContent;
}

void EDFile::write(string fileContent)
{
	m_destFile.open(m_destFileName);
	m_destFile << fileContent;
	m_destFile.close();
}

void EDFile::encrypt()
{
	int type(0);
	cout << "Quel type d'encryptage voulez-vous?\n\t1) Cesar\n\t2) xOR\n\t3) Cesar puis xOR\n\t4) xOR puis Cesar\nVous choisissez: ";
	cin >> type;

	switch (type) {
		case 1: {
			string fileContent(""), encryptedFileContent("");
			fileContent = read();
			encryptedFileContent = cesar(fileContent);
			write(encryptedFileContent);
			break;
		}
		case 2: {
			string fileContent(""), encryptedFileContent("");
			fileContent = read();
			encryptedFileContent = xOR(fileContent);
			write(encryptedFileContent);
			break;
		}
	}
}

string EDFile::cesar(string fileContent)
{
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

string EDFile::xOR(string fileContent)
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