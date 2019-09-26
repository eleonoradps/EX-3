#include <iostream>

// exercice 3.6

int fib(int n) {

	int fibonacci;
	if (n == 1) {
		fibonacci = 0;
	}
	else if (n == 2) {
		fibonacci = 1;
	}
	else {
		fibonacci = fib(n - 1) + fib(n - 2);
	}
	return fibonacci;
}

int main() {

	int n;
	int i;

	std::cout << "Entrez le nombre de termes : ";
	std::cin >> n;

	i = fib(n);

	std::cout << "Voici le terme " << i << "\n";
	


	return EXIT_SUCCESS;
}