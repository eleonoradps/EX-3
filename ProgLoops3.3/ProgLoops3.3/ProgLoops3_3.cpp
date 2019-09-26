#include <iostream>

// exercice 3.3

int somme(int a, int b) { // calcul de l'addition
	int resultat = a + b;
	return resultat;

}

int difference(int a, int b) { // calcul de la soustraction
	int resultat = a - b;
	return resultat;

}

int produit(int a, int b) { // calcul de la multiplication
	int resultat = a * b;
	return resultat;

}

int quotient(int a, int b) { // calcul de la division
	int resultat = a / b;
	return resultat;

}

int main() {
	float a;
	float b;
	bool quit = true;
	int choice;
	while (quit) {

	std::cout << "Entrez un entier a ";
	std::cin >> a;
	std::cout << "Entrez un entier b ";
	std::cin >> b;	

	std::cout << "Choisissez une operation ou quittez \n";
	std::cout << "Additionner = 1 \n";
	std::cout << "Soustraire = 2 \n";
	std::cout << "Multiplier = 3 \n";
	std::cout << "Diviser = 4 \n";
	std::cout << "Quitter = 5 \n";
	std::cin >> choice;

	if (choice == 1) 
		{
		std::cout << "Votre resultat est " << somme(a,b) << "\n";
		}

	else if (choice == 2) 
		{
		std::cout << "Votre resultat est " << difference(a,b) << "\n";
		}

	else if (choice == 3) 
		{
		std::cout << "Votre resultat est " << produit(a,b) << "\n";
		}

	else if (choice == 4) 
		{
		if (b == 0) {
			std::cout << "ERREUR \n";
		}
		else
		std::cout << "Votre resultat est " << quotient(a,b) << "\n";
		}
		
	else if (choice == 5) 
		{
		quit = false;
		}
}
	return EXIT_SUCCESS;

}