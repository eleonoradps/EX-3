#include <iostream>

// exercice 3.9

/*
tourDepart signifie la tour de départ
tourArrivee signifie la tour d'arrivée
tourInt signifie la tour intermédiaire
*/

int tourHanoi(int n, char tourDepart, char tourArrivee, char tourInt) {

	if (n == 1) 
	{
		std::cout << "Bougez le disque " << n << " de " << tourDepart << " a " << tourArrivee << "\n";
		return n;
	}
	
	tourHanoi(n - 1, tourDepart, tourArrivee, tourInt);
	std::cout << "Bougez le disque " << n << " de " << tourDepart << " a " << tourArrivee << "\n";
	tourHanoi(n - 1, tourInt, tourDepart, tourArrivee);
}


int main() {

	int n;
	std::cout << "Entrez le nombre de disques \n";
	std::cin >> n;

	tourHanoi(n, 'A', 'B', 'C'); // nom des disques

	return EXIT_SUCCESS;

}