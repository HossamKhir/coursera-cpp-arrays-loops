/*
 * YearAvg.cpp
 *
 *  Created on: Oct 7, 2020
 *      Author: rhyme
 */

#include "YearAvg.h"

YearAvg::YearAvg() {
	this->temp = 0;
	this->year = 0;
	this->rain = 0;

}

YearAvg::YearAvg(double temp, int year, double rain) {
	this->temp = temp;
	this->year = year;
	this->rain = rain;
}

std::string YearAvg::toCSV(void) {
//	std:ios
	return NULL;
}


YearAvg::~YearAvg() {
	// TODO Auto-generated destructor stub
}



