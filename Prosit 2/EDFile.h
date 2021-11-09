#pragma once
#ifndef DEF_EDFile
#define DEF_EDFile
#include <fstream>
#include <vector>

class EDFile
{
public:
	EDFile(std::string fileName);
	std::string read();
	void write(std::string fileContent);
	void crypt();

private:
	std::fstream m_file;
	std::string m_fileName;
	std::string cesar(std::string fileContent, int mode);
	std::string xOR(std::string fileContent, int mode);

};

#endif