#pragma once
#include "TomRandom.h"

using namespace std;

class Dice
{
public:
	Dice();
	int roll(TomRandom&);
	double expValue();
	void setSize(int& value) { size = value; }
	double getExpValue() { return expectedValue; }
	int getSize() { return size; }

private:
	int size;
	double expectedValue = 0.0;
};
