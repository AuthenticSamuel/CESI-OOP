#include "Coordinates.h"
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


// Public
void Coordinates::pointAdd(int x, int y) {

	m_xlist.push_back(x);
	m_ylist.push_back(y);
	cout << "Les coordonnees (" << x << ", " << y << ") ont ete ajoutes." << endl << endl;

}

void Coordinates::pointAddCin() {

	int x, y;

	cout << "X: ";
	cin >> x;
	m_xlist.push_back(x);

	cout << "Y: ";
	cin >> y;
	m_ylist.push_back(y);

	cout << "Les coordonnees (" << x << ", " << y << ") ont ete ajoutes." << endl << endl;

}

void Coordinates::pointDelete(int index) {

	m_xlist.erase(m_xlist.begin() + index - 1);
	m_ylist.erase(m_ylist.begin() + index - 1);
	cout << "Le point " << index << " a ete supprime." << endl << endl;

}

void Coordinates::list() const {

	cout << "Liste de x: ";
	if (m_xlist.size() == 0) cout << "Pas de valeurs." << endl << endl;
	else if (m_xlist.size() == 1) cout << m_xlist[0] << endl << endl;
	else {

		for (int i = 0; i < m_xlist.size(); i++) {

			cout << m_xlist[i];
			if (i != m_xlist.size() - 1) cout << ", ";

		}

		cout << endl << endl;

	}

	cout << "Liste de y: ";
	if (m_ylist.size() == 0) cout << "Pas de valeurs." << endl << endl;
	else if (m_ylist.size() == 1) cout << m_ylist[0] << endl << endl;
	else {

		for (int i = 0; i < m_ylist.size(); i++) {

			cout << m_ylist[i];
			if (i != m_ylist.size() - 1) cout << ", ";

		}

		cout << endl << endl;

	}

}

void Coordinates::distance() {

	if (m_xlist.size() < 2 && m_ylist.size() < 2) cout << "Il faut au moins 2 points pour calculer la distance." << endl << endl;
	else if (m_xlist.size() != m_ylist.size()) cout << "Les deux listes doivent etre de la meme taille." << endl << endl;
	else {

		for (int i = 1; i < m_xlist.size(); i++) {

			cout << "La distance entre le point " << i << " et le point " << i + 1 << " est de " << getDistance(i) << "." << endl << endl;

		}

	}

}

void Coordinates::verifyHypothesis(float h, int index) {

	if (m_xlist.size() < 2 && m_ylist.size() < 2) cout << "Il faut au moins 2 points pour verifier l'hypothese de distance." << endl << endl;
	else if (m_xlist.size() != m_ylist.size()) cout << "Les deux listes doivent etre de la meme taille." << endl << endl;
	else if (m_xlist.size() < index - 1 || m_ylist.size() < index - 1) cout << "Veuillez renseigner un index existant." << endl << endl;
	else {

		float distance(0);
		distance = getDistance(index);
		h == distance ? cout << "Vrai" : cout << "Faux";
		cout << " a l'index " << index << " entre (" << m_xlist[index - 1] << ", " << m_ylist[index - 1] << ") et (" << m_xlist[index] << ", " << m_ylist[index] << ").\n\tHypothese: " << h << "\n\tCalcul: " << distance << endl << endl;

	}

}

void Coordinates::listReset() {

	m_xlist.clear();
	m_ylist.clear();
	cout << "Les listes ont ete efface." << endl << endl;

}


// Private
float Coordinates::getDistance(int index) {

	return sqrt(pow(m_xlist[index] - m_xlist[index - 1], 2) + pow(m_ylist[index] - m_ylist[index - 1], 2));

}