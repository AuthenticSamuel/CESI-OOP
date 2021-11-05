#pragma once
#ifndef DEF_LISTDATA
#define DEF_LISTDATA
#include <vector>

class ListData {

public:
	void dataAdd(int x);
	void dataRead() const;
	int dataNum() const;
	int dataSum();
	float dataAvg();
	int dataMin();
	int dataMax();
	int dataMaxVar(); // variationMax();

private:
	std::vector<int> data;

};

#endif