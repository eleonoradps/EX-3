#include <iostream>
#include <math.h>

// exercice 3.2

int Factorielle(int n) {

	if (n > 1) {
		return n * Factorielle(n - 1);
	}
	else {
		return 1; 
	}
}

int main() {
	int n;

	std::cout << "Entrez un nombre entier";
	std::cin >> n;

	
	std::cout << "Le calcul de la fonction est " << n << "=" << Factorielle(n);

	
}