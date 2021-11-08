#include <iostream>
#include <string>
#include "File.h"
using namespace std;

int main()
{
	// Exercice 1 - 2
	File myFile("example.txt");
	string fileContent(myFile.read());
	cout << fileContent << endl;
	myFile.write("du texte a ecrire");
	return 0;


	// Exercice 3 - 4 | voir Prosit 2
}