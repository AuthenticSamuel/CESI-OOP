#pragma once
#ifndef DEF_VOITURE
#define DEF_VOITURE

class Voiture
{
public:
	Voiture();
	Voiture(int vitesseMax, double acceleration);

protected:
	int m_vitesse;
	int m_vitesseMax;
	double m_acceleration;

private:
	int m_nombreObjets;

};

#endif