#include <iostream>
#include <math.h>

// exercice 3.0

#define MAX_NUMBER 5;

int main() {
	float sum = 0;
	float moyenne = 0;
	int moyenneNbre = MAX_NUMBER; // Nombre permettant de faire la moyenne
	const int maxNumber = MAX_NUMBER;

	for (int i = 0; i < maxNumber; i++) {

		std::cout << "Donnez un entier " << i << "\n";

		int tmp;
		std::cin >> tmp;
		sum += tmp;
		
	}
	
	std::cout << " La somme des entiers est " << sum << "\n";
		
		moyenne = sum / MAX_NUMBER;
		std::cout << "La moyenne des entiers est " << moyenne << "\n";


	return EXIT_SUCCESS;
}