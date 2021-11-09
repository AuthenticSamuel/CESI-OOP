#include <fstream>
#include <string>
#include "File.h"
using namespace std;

File::File(string filePath) : m_filePath(filePath)
{

}

string File::read()
{
	m_file.open(m_filePath);
	string fileContent((istreambuf_iterator<char>(m_file)), istreambuf_iterator<char>());
	m_file.close();
	return fileContent;
}

void File::write(string fileContent)
{
	m_file.open(m_filePath);
	m_file << fileContent;
	m_file.close();
}

