#include <iostream>
#include <vector>
#include "Coordinates.h"
using namespace std;

int main() {

	Coordinates list;

	// Ajouter des valeurs dans les listes x et y
	list.pointAdd(0, 0);
	list.pointAdd(0, 1);
	list.pointAdd(0, 2);

	// Afficher toute les listes x et y
	list.list();

	// Calculer la/les distance(s) entre les points
	list.distance();

	// Supprimer un point des listes x et y
	list.pointDelete(2);

	list.list();

	list.distance();

	// Valider ou non une hypothèse donnée
	list.verifyHypothesis(1, 1);

	// Effacer les listes x et y
	list.listReset();

	list.list();

	return 0;

}