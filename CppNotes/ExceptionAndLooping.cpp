#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <numeric>
#include <ctime>

int main2(int argc, char ** argv)
{
	/********** Guess example***********
	srand(time(NULL));
	int secretNum = std::rand() % 11;
	int guess = 0;
	do
	{
		std::cout << "Guess the number : ";
		std::cin >> guess;
		if (guess > secretNum) std::cout << "To Big \n";
		if (guess < secretNum) std::cout << "To Small \n";
	} while (secretNum != guess);

	std::cout << "Youo guessed it\n";
	*/

	/*************
	double num1 = 0, num2 = 0;

	std::cout << "Enter number 1 : ";
	std::cin >> num1;
	std::cout << "Enter number 2 : ";
	std::cin >> num2;

	try {
		if (num2 == 0)
			throw "Division byzero is not possible";
		else {
			printf("%.1f / %.1f = %.2f", num1, num2, (num1 / num2));
		}

	}
	catch (const char* ex)
	{
		std::cout << "Error : " << ex << "\n";
	}
	*/
	/***********************************
	try {
		std::cout << "Throwing exception\n";
		throw std::runtime_error("Error Occured");
		std::cout << "Can you print me ? \n";
	}
	catch (std::exception &exp)
	{
		std::cout << "Handled Exception : " << exp.what();
	}
	catch (...)
	{
		std::cout << "DEfault exception\n";
	}
	*/


	return 0;
}