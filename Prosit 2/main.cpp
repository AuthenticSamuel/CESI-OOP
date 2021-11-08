#include <iostream>
#include <fstream>
#include <string>
#include "EDFile.h"
using namespace std;

int main()
{
	EDFile myFile("example.txt", "encrypted.txt");
	myFile.encrypt();
	return 0;
}