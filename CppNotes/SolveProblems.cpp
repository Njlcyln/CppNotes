#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <numeric>
#include <ctime>
#include <cmath>
#include <ctime>
#include <sstream>

std::vector<std::string> StringToVector(std::string theString, char sparator);
void SolveForX(std::string equation);
std::vector<int> Range(int start, int max, int step);
std::vector<int> GenerateRandVec(int numOfNums,
	int min, int max);

bool IsPrime(int num);
std::vector<int> GetPrimes(int maxNum);

int main7(int argc, char ** argv)
{
	std::vector<int> vecVals = GenerateRandVec(10, 5, 50);
	for (auto x : vecVals)
	{
		std::cout << x << std::endl;
	}


	/*
	int num = 0;
	std::cout << "Number to check : ";
	std::cin >> num;

	std::cout.setf(std::ios::boolalpha);
	std::cout << "Is " << num << " Prime" << IsPrime(num) << std::endl;

	std::cout << "Generate primets up to ";
	int maxPrime;
	std::cin >> maxPrime;
	std::vector<int> primeList = GetPrimes(maxPrime);

	for (auto x : primeList)
	{
		std::cout << x << "\n";
	}
	*/
	/*************************
	std::cout << "Enter an equation to solve ";
	std::string equation = "";

	getline(std::cin, equation);
	SolveForX(equation);*/

	return 0;
}

std::vector<int> GenerateRandVec(int numOfNums,
	int min, int max)
{
	std::vector<int> vecValues;

	srand(time(NULL));
	int i = 0, randVal = 0;

	while (i < numOfNums)
	{
		randVal = min + std::rand() % ((max + 1) - min);
		vecValues.push_back(randVal);

		i++;
	}
	return vecValues;
}

std::vector<int> Range(int start, int max, int step)
{
	int i = start;
	std::vector<int> range;

	while (i <= max)
	{
		range.push_back(i);
		i += step;
	}

	return range;
}

//x + 4 = 9
void SolveForX(std::string equation)
{
	std::vector<std::string> vecEquation = StringToVector(equation, ' ');
	int num1 = std::stoi(vecEquation[2]);
	int num2 = std::stoi(vecEquation[4]);

	int xValue = num2 - num1;

	std::cout << "x : " << xValue << std::endl;
}

std::vector<int> GetPrimes(int maxNum)
{
	std::vector<int> vecPrimes;
	for (auto x : Range(2, maxNum, 1))
	{
		if (IsPrime(x))
		{
			vecPrimes.push_back(x);
		}
	}
	return vecPrimes;
}

bool IsPrime(int num)
{
	for (auto n : Range(2, num - 1, 1))
	{
		if ((num%n) == 0)
		{
			return false;
		}
	}
	return false;
}