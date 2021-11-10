#include "Voiture.h"
using namespace std;

Voiture::Voiture() : m_vitesse(0), m_vitesseMax(1), m_acceleration(0), m_nombreObjets(0)
{
	m_nombreObjets++;
}

Voiture::Voiture(int vitesseMax, double acceleration) : m_vitesse(0), m_vitesseMax(vitesseMax), m_acceleration(acceleration), m_nombreObjets(0)
{
	m_nombreObjets++;
}