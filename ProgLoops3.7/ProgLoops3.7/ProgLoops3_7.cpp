#include <iostream>
#define MAX_NUMBER 1000;

// exercice 3.7

int recurse(int test)
{
	int sum = 0;
	const int max = MAX_NUMBER;

	if (test < max) 
	{
		if (test % 3 == 0 || test % 5 == 0)
		{
			sum += test;
			sum += recurse(++test);
		}
		else
			sum += recurse(++test);
	}

	return sum;
}


int main() {

	int sum;
	int test = 0;

	sum = recurse(test);

	std::cout << "La somme des multiples de 3 ou 5 est " << sum << "\n";
	return EXIT_SUCCESS;

}