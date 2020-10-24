//============================================================================
// Name        : Main.cpp
// Author      : rhyme
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include "YearAvg.h"
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
	// declare array of 5 integers
//	int ages[5];
	// assign by subscript
//	ages[0] = 45;
//	ages[4] = 55;
	// arrays use 0-based indexing starting at 0 and ending @ length - 1
//	 define array with values
//	int age[] = {45, 33, 12, 28, 55};

	// arrays can be like before from natives or from objects like following
//	YearAvg avgs[2];
//	avgs[0] = YearAvg(10.0, 1955, 12.3);
//	avgs[1] = YearAvg(20.0, 1975, 22.0);

	int size = 0;
	std::string line;

	ifstream file("yearly.csv");

	if (file.is_open())
	{
		while(getline(file, line))
		{
			std::cout << line << std::endl;
			++size;
		}
		file.close();
	}
	else
	{
		std::cerr << "Error opening file" << std::endl;
	}

	std::cout << "The size of the file is " << size << std::endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

