#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <numeric>

int main1(int argc, char ** argv)
{
	std::cout << "how to tall is the tree : ";
	int treeHeight = 0, spaces = 0, hashes = 1,
		stumpSpaces = 0;

	std::cin >> treeHeight;
	spaces = treeHeight - 1;
	stumpSpaces = treeHeight - 1;

	while (treeHeight != 0)
	{
		for (int i = 0; i < spaces; i++) {
			std::cout << " ";
		}

		for (int i = 0; i < hashes; i++)
			std::cout << "#";

		std::cout << std::endl;

		spaces--;
		hashes += 2;
		treeHeight--;
	}

	for (int i = 0; i < stumpSpaces; i++)
	{
		std::cout << " ";
	}
	std::cout << "#";

	return 0;
}

//FUNCTIONS

//END FUNCTIONS