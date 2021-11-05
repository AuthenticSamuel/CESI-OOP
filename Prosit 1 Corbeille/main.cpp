#include "ListData.h"
#include <iostream>
using namespace std;

void statique() {

	ListData list;

	list.dataAdd(3);
	list.dataAdd(9);
	list.dataAdd(13);
	list.dataAdd(-1);
	cout << "AVG: " << list.dataAvg() << endl;
	list.dataAdd(0);
	cout << "MIN: " << list.dataMin() << endl;

}

void dynamique() {

	ListData* list = new ListData;

	list->dataAdd(3);
	list->dataAdd(9);
	list->dataAdd(13);
	list->dataAdd(-1);
	cout << "AVG: " << list->dataAvg() << endl;
	list->dataAdd(0);
	cout << "MIN: " << list->dataMin() << endl;

	delete list;

}

void multiple() {

	ListData* list_a = new ListData;
	ListData* list_b = new ListData;

	list_a->dataAdd(3);
	list_a->dataAdd(9);
	list_a->dataAdd(13);
	list_a->dataAdd(-1);

	list_b->dataAdd(-5);
	list_b->dataAdd(-2);
	list_b->dataAdd(-7);

	list_b->dataRead();

	cout << "LISTE 1 AVG: " << list_a->dataAvg() << endl;
	cout << "LISTE 2 AVG: " << list_b->dataAvg() << endl;

	delete list_a;
	delete list_b;

}

int main() {

	//statique();
	//dynamique();
	//multiple();
	return 0;

}