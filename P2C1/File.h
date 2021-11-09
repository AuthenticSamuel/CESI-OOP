#pragma once
#ifndef DEF_FILE
#define DEF_FILE
#include <fstream>
#include <string>

class File
{
public:
	File(std::string filePath);
	std::string read();
	std::string readBin();
	void write(std::string fileContent);
	void writeBin(std::string fileContent);

private:
	std::string m_filePath;
	std::fstream m_file;

};

#endif