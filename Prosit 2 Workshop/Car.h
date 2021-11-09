#pragma once
#ifndef DEF_CAR
#define DEF_CAR
#include <string>

class Car
{
public:
	Car();
	Car(std::string license, int year, std::string model);
	~Car();
	std::string getLicense();
	int getYear();
	std::string toString();

private:
	std::string m_license;
	int m_year;
	std::string m_model;

};

#endif