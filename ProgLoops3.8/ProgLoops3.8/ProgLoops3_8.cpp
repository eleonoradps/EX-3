#include <iostream>
#define MAX_NUMBER 4000000;

// exercice 3.8

int main() {

	unsigned int a = 0;
	unsigned int b = 1;
	unsigned int c = 0;
	unsigned int sum = 0;
	unsigned int max = MAX_NUMBER;

	for(int i = 1; i < max ; i++)
	{
		c = a + b;

		if ((c % 2) == 0) 
		{
			sum += c;
		}
		

		a = b;
		b = c;
	}
	
	std::cout << " Voici la somme " << sum << "\n";
	return EXIT_SUCCESS;

}