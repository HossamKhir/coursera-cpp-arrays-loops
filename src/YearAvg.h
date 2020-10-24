/*
 * YearAvg.h
 *
 *  Created on: Oct 7, 2020
 *      Author: rhyme
 */

#ifndef YEARAVG_H_
#define YEARAVG_H_
#include <sstream>
using namespace std;
class YearAvg {
public:
	YearAvg();

	virtual ~YearAvg();

	YearAvg(double, int, double);

	std::string toCSV(void);

private:
	double temp;
	int year;
	double rain;

};

#endif /* YEARAVG_H_ */
