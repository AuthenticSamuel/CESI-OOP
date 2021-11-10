#include "Points.h"
#include "Parcours.h"
#include <iostream>
using namespace std;

int main()
{
	Point2D p1;
	Point2D p2(1, 2);

	Point3D p3;
	Point3D p4(1, 2, 3);

	Parcours2D par1;
	Parcours3D par2;

	par1.add(p1);
	par1.add(p2);
	cout << par1.distance() << endl;

	par2.add(p3);
	par2.add(p4);
	cout << par2.distance() << endl;

	return 0;
}