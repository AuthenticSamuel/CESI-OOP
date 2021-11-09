#include <string>
#include "Car.h"
using namespace std;

Car::Car() : m_license("ABCDEFG12"), m_year(2000), m_model("Prototype")
{

}

Car::Car(string license, int year, string model) : m_license(license), m_year(year), m_model(model)
{

}

Car::~Car()
{

}

string Car::getLicense()
{
	return this->m_license;
}

int Car::getYear()
{
	return this->m_year;
}

string Car::toString()
{
	return this->m_license + " " + to_string(this->m_year) + " " + this->m_model;
}