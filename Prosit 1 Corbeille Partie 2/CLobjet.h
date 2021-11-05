#pragma once
#ifndef DEF_CLOBJET
#define DEF_CLOBJET

class CLobjet {

public:
	CLobjet(void);
	CLobjet(double masse, double vitesse);
	void calculer(void);

	// Getters
	double getMasse();
	double getVitesse();
	double getEc() const;

	// Setters
	void setMasse(double);
	void setVitesse(double);

private:
	double masse;
	double vitesse;
	double ec;

};

#endif