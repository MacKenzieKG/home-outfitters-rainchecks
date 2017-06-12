#include "Date.h"
#include <sstream>

using namespace std;

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

string Date::toString()
{
	stringstream ss;

	if (month < 10)
		ss << "0";

	ss << month << "/";

	if (day < 10)
		ss << "0";

	ss << day << "/" << year;

	return ss.str();
}
