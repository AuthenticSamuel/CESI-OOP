#include "CLa.h"

int main() {

	CLa o1;
	CLa* o2 = new CLa;
	
	o1.afficher();

	delete o2;

	return 0;

}