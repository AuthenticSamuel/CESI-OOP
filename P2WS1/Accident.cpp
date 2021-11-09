#include <string>
#include "Accident.h"
#include "Car.h"
using namespace std;

Accident::Accident() : m_reportNumber(0), m_location(""), m_car1(new Car), m_car2(new Car)
{

}

Accident::Accident(int number, string location, Car* car1, Car* car2) : m_reportNumber(number), m_location(location), m_car1(car1), m_car2(car2)
{

}

Accident::~Accident()
{

}

Car* Accident::getFirstCar()
{
	return this->m_car1;
}

Car* Accident::getSecondCar()
{
	return this->m_car2;
}

string Accident::getLocation()
{
	return this->m_location;
}

string Accident::toString()
{
	return "Number: " + to_string(m_reportNumber) + "\nLocation: " + m_location + "\nCar 1: " + getFirstCar()->toString() + "\nCar 2: " + getSecondCar()->toString();
}