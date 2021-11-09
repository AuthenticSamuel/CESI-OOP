#include "ListData.h"
#include <vector>
#include <iostream>
using namespace std;

// Public

ListData::ListData() {}

ListData::ListData(int x) { dataAdd(x); }

void ListData::dataAdd(int x) {

	if (data.size() > 1023) cout << "Trop de valeurs dans la liste." << endl;
	else data.push_back(x);

}

void ListData::dataRead() const {

	for (int i(0); i < data.size(); i++) cout << data[i] << endl;

}

int ListData::dataNum() const {

	return data.size();

}

int ListData::dataSum() {

	int sum(0);
	for (int i(0); i < data.size(); i++) sum += data[i];
	return sum;

}

double ListData::dataAvg() {

	return dataSum() / data.size();

}

int ListData::dataMin() {

	int min(0);
	min = data[0];
	for (int i(0); i < data.size(); i++) data[i] < min ? min = data[i] : 0;
	return min;

}

int ListData::dataMax() {

	int max(0);
	max = data[0];
	for (int i(0); i < data.size(); i++) data[i] > max ? max = data[i] : 0;
	return max;

}

int ListData::dataMaxVar() {

	return dataMax() - dataMin();

}