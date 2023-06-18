#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <numeric>
#include <ctime>
#include <cmath>
#include <sstream>

std::vector<std::string> StringToVector(std::string theString, char sparator);
std::string VectorToString(std::vector<std::string>& vec, char seperator);
std::string TrimWhitespace(std::string theString);
std::vector<int> FindSubstringMatches(std::string theString, std::string substring);
std::string ReplaceAllSubstring(std::string theString, std::string substring, std::string newString);

int main4(int argc, char ** argv)
{


	/**********
	std::cout << ReplaceAllSubstring("to know not to know", "know", "be") << std::endl;
	*/
	/*******************
	std::string phrase = "To be or not to be";
	std::vector<int> matches = FindSubstringMatches(phrase, "be");

	for (int i = 0; i < matches.size(); ++i)
	{
		std::cout << matches[i] << "\n";
	}
	*/



	/****************
	std::string aStr = "          Just some random words         ";
	aStr = TrimWhitespace(aStr);
	std::cout << "*" << aStr << "*\n";
	*/
	/**************
	std::vector<std::string> vCusts(3);
	vCusts[0] = "Bob";
	vCusts[1] = "Sue";
	vCusts[2] = "Tom";

	std::string sCusts = VectorToString(vCusts, ' ');
	std::cout << sCusts << std::endl;
 */
 /**********
 std::vector<std::string> vec =
	 StringToVector("This is a random string", ' ');

 for (int i = 0; i < vec.size(); i++)
 {
	 std::cout << vec[i] << std::endl;
 }
 */
	return 0;
}


std::string ReplaceAllSubstring(std::string theString, std::string substring, std::string newString)
{
	std::vector<int> matches = FindSubstringMatches(theString, substring);

	if (matches.size() != 0)
	{
		int lenghtDifference = newString.size() - substring.size();
		int timesLooped = 0;
		for (auto index : matches)
		{
			theString.replace(index + (timesLooped * lenghtDifference),
				substring.size(), newString);

			timesLooped++;
		}
	}

	return theString;
}

std::vector<int> FindSubstringMatches(std::string theString, std::string substring)
{
	std::vector<int> matchingIndexes;
	int index = theString.find(substring);

	while (index != std::string::npos)
	{
		matchingIndexes.push_back(index);
		index = theString.find(substring, index + 1);
	}

	return matchingIndexes;
}

std::string TrimWhitespace(std::string theString)
{
	std::string whitespaces(" \t\f\n\r");
	theString.erase(theString.find_last_not_of(whitespaces) + 1);
	theString.erase(0, theString.find_first_not_of(whitespaces));

	return theString;
}

std::string VectorToString(std::vector<std::string>& vec, char seperator)
{
	std::string theString = "";
	for (auto cust : vec)
	{
		theString += cust + seperator;
	}

	return theString;
}


std::vector<std::string> StringToVector(std::string theString,
	char separator)
{
	std::vector<std::string> vecsWords;
	std::stringstream ss(theString);
	std::string sIndivStr;

	while (getline(ss, sIndivStr, separator))
	{
		vecsWords.push_back(sIndivStr);
	}

	return vecsWords;
}