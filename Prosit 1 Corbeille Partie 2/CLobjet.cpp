#include "CLobjet.h"
#include <math.h>

CLobjet::CLobjet(void) : masse(1), vitesse(1), ec(0) {}

CLobjet::CLobjet(double _masse, double _vitesse) : masse(_masse > 0 ? _masse : 1), vitesse(_vitesse > 0 ? _vitesse : 1) {}

CLobjet::CLobjet(const CLobjet &obj) {}

void CLobjet::calculer(void) { this->ec = 0.5 * this->masse * pow(this->vitesse, 2); }

// Getters
double CLobjet::getMasse() { return this->masse; }
double CLobjet::getVitesse() { return this->vitesse; }
double CLobjet::getEc() const { return this->ec; }

// Setters
void CLobjet::setMasse(double _masse) { masse = _masse; }
void CLobjet::setVitesse(double _vitesse) { vitesse = _vitesse; }