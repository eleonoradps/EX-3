#include <iostream>
#define MAX_NUMBER 1000

// exercice 3.4


int main() {

	int sum = 0;
	const int maxNumber = MAX_NUMBER;


	for (int i = 3; i < maxNumber; i++) {

		if (i % 3 == 0 || i % 5 == 0) 
		{
			sum += i;

		}
	}

	std::cout << "La somme des multiples de 3 ou 5 est " << sum << "\n";
	return EXIT_SUCCESS;
}