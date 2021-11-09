#include "CLa.h"
#include "CLobjet.h"
#include <iostream>
using namespace std;

void exo1() {

	CLa o1;
	CLa* o2 = new CLa;

	o1.afficher();
	o2->afficher();

	cout << "Adresse o1: " << &o1 << endl;
	cout << "Adresse o2: " << &o2 << endl;
	cout << "Adresse pointee par o2: " << &*o2 << endl;
	cout << "Taille de CLa: " << sizeof(CLa) << endl;
	cout << "Taille de o1: " << sizeof(o1) << endl;
	cout << "Taille de o2: " << sizeof(o2) << endl;

	delete o2;

}


void comparer(CLobjet* o1, CLobjet* o2) {

	float ec1(0), ec2(0);
	o1->calculer();
	o2->calculer();
	ec1 = o1->getEc();
	ec2 = o2->getEc();
	ec1 > ec2
		? cout << "ec1 (" << ec1 << ") > ec2 (" << ec2 << ")" << endl
		: cout << "ec1 (" << ec1 << ") < ec2 (" << ec2 << ")" << endl;

}

void exo2() {

	CLobjet* o1 = new CLobjet(50, 25);
	CLobjet* o2 = new CLobjet(25, 10);

	comparer(o1, o2);

}

int main() {

	//exo1();
	exo2();

	return 0;

}