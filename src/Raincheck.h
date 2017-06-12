#pragma once

#include "Date.h"
#include <string>

using namespace std;

class Raincheck
{
public:
	Raincheck();

private:
	Date* date;
	string itemDesc;
	int itemPLU, quantity;
	int storeNumber;

	bool guestAdvised;
	Date* adviceDate;
};
