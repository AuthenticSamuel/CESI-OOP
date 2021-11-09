#pragma once
#ifndef DEF_ACCIDENT
#define DEF_ACCIDENT
#include <string>
#include "Car.h"

class Accident
{
public:
	Accident();
	Accident(int number, std::string location, Car* c1, Car* c2);
	~Accident();
	Car* getFirstCar();
	Car* getSecondCar();
	std::string getLocation();
	std::string toString();

private:
	int m_reportNumber;
	std::string m_location;
	Car* m_car1;
	Car* m_car2;

};

#endif