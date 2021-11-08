#pragma once
#ifndef DEF_EDFile
#define DEF_EDFile
#include <fstream>
#include <vector>

class EDFile
{
public:
	EDFile(std::string sourceFileName, std::string destinationFileName);
	std::string read();
	void write(std::string fileContent);
	void encrypt();
	void decrypt();

private:
	std::ifstream m_srcFile;
	std::ofstream m_destFile;
	std::string m_srcFileName;
	std::string m_destFileName;
	std::string cesar(std::string fileContent);
	std::string xOR(std::string fileContent);

};

#endif