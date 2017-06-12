#pragma once

#include <string>

using namespace std;

class Date
{
public:
	Date(int d, int m, int y);

	string toString();

private:
	int day, month, year;
};
