#include <iostream>

// exercice 3.1

int main() {

	int n;
	bool premier = true;

	std::cout << "Entrez un nombre premier";
	std::cin >> n;

	for (int i = 2; i <= n / 2; ++i) {

		if (n % i == 0) {

			premier = false;
			break;
		}

		
	}

	if (premier)
		std::cout << "Ceci est un nombre premier";
	else
		std::cout << "Ne fait pas parti des nombres premiers";

	return EXIT_SUCCESS;


}