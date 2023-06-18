#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <numeric>
#include <ctime>
#include <cmath>

int main3(int argc, char ** argv)
{
	/****MATH***/
	//std::cout << "abs(-10) " << std::abs(-10) << "\n";



	/******char to ascii******
	std::string normalStr, secretStr = "";

	std::cout << "Enter your string in uppercase : ";
	std::cin >> normalStr;

	for (char c : normalStr)
	{
		secretStr += std::to_string((int)c - 23);
	}

	std::cout << "Secret : " << secretStr << "\n";

	normalStr = "";

	for (int i = 0; i < secretStr.length(); i += 2)
	{
		std::string sCharCode = "";
		sCharCode += secretStr[i];
		sCharCode += secretStr[i+1];

		int nCharCode = std::stoi(sCharCode);
		char chCharCode = nCharCode + 23;
		normalStr += chCharCode;
	}

	std::cout << "Original : " << normalStr << "\n";
	*/
	/*******string********
	std::vector<std::string> strVec(10);

	std::string str("I'm a string");
	strVec[0] = str;

	std::cout << str.front() << " "<< str.back() << "\n";
	std::cout << "Lenght " << str.length() << "\n";
	std::string str2(str);
	strVec[1] = str2;

	std::string str3(str, 4);
	strVec[2] = str3;
	std::string str4(5, 'x');
	strVec[3] = str4;
	strVec[4] = str.append(" and your not");
	str += " and your not";
	str.append(str, 34, 37);
	strVec[5] = str;
	str.erase(13, str.length() - 1);
	strVec[6] = str;

	if (str.find("string") != std::string::npos)
		std::cout << "1st index " << str.find("string") << "\n";

	std::cout << "Substr " << str.substr(6, 6) << "\n";

	reverse(str.begin(), str.end());

	std::cout << "Reverse " << str << "\n";

	std::transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

	std::cout << "Transform to upper " << str2 << "\n";

	std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

	std::cout << "Transform to lower " << str2 << "\n";

	std::cout << str << "\n";

	for (auto y : strVec)
		std::cout << y << "\n";

	char aChar = 'A';
	int aInt = aChar;

	std::cout << "A Code " << (int)'a' << "\n";
	std::cout << "A Code " << aInt << "\n";

	std::string strNum = std::to_string(1 + 2);
	std::cout << "String " << strNum << "\n";
	*/
	return 0;
}