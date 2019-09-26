#include <iostream>

// exercice 3.5

int main() {

	int i;
	int u = 3;
	int n;

	std::cout << "Tapez n : ";
	std::cin >> n;

	for (i = 0; i < n; i++) {
		u = u * 3 + 4;
	}

	std::cout << "u (" << n << ") = " << u << "\n";
	return EXIT_SUCCESS;
}