#pragma once
#include "TomRandom.h"

using namespace std;

class Dice
{
public:
	Dice();
	int roll();
	double expValue();
	//double getExpValue() { return expectedValue; }
	void setSize(int& value) { size = value; }
	int getSize() { return size; }

private:
	int size;
	//double expectedValue;
	TomRandom tomRandom;
};
