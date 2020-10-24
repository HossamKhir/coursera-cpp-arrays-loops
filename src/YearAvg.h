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

	const std::string toCSV(void);

	double getRain() const {
		return rain;
	}

	void setRain(double rain) {
		this->rain = rain;
	}

	double getTemp() const {
		return temp;
	}

	void setTemp(double temp) {
		this->temp = temp;
	}

	int getYear() const {
		return year;
	}

	void setYear(int year) {
		this->year = year;
	}

private:
	double temp;
	int year;
	double rain;

};

#endif /* YEARAVG_H_ */
