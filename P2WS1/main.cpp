#include <iostream>
#include <vector>
#include <tuple>
#include "Accident.h"
#include "Car.h"
using namespace std;

vector<Car> findByLocation(string location, vector<Accident>& accidentList)
{
	vector<Car> carList;

	for (int i(0); i < accidentList.size(); ++i) {
		if (accidentList[i].getLocation() == location) {
			carList.push_back(*accidentList[i].getFirstCar());
			carList.push_back(*accidentList[i].getSecondCar());
		}
	}

	return carList;
}

tuple<string, int, string> inputData()
{
	string license(""), model("");
	int year(0);
	cout << "\n\n\tInput Data for a new Car" << endl;
	cout << "License: ";
	cin >> license;
	cout << "Year: ";
	cin >> year;
	cout << "Model: ";
	cin >> model;
	cout << endl;
	return make_tuple(license, year, model);
}

int main()
{
	string license, model;
	int year;

	tie(license, year, model) = inputData();
	Car c1(license, year, model);
	tie(license, year, model) = inputData();
	Car c2(license, year, model);
	tie(license, year, model) = inputData();
	Car c3(license, year, model);
	tie(license, year, model) = inputData();
	Car c4(license, year, model);

	vector<Accident> accidentList;
	accidentList.push_back(Accident(22344, "Somewhere", &c1, &c2));
	accidentList.push_back(Accident(3143, "Hmmm", &c3, &c4));
	accidentList.push_back(Accident());
	vector<Car> carList = findByLocation("Hmmm", accidentList);

	for (int i(0); i < carList.size(); ++i) cout << carList[i].toString() << endl;

	return 0;
}