#include "ListData.h"
#include <iostream>
using namespace std;

int main() {

	ListData list;

	list.dataAdd(4);
	list.dataAdd(19);
	list.dataAdd(2345);
	list.dataAdd(2);

	list.dataRead();

	cout << "SUM: " << list.dataSum() << endl;
	cout << "AVG: " << list.dataAvg() << endl;
	cout << "MIN: " << list.dataMin() << endl;
	cout << "MAX: " << list.dataMax() << endl;
	cout << "MAXVAR: " << list.dataMaxVar() << endl;

	return 0;

}