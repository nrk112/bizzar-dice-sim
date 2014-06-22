#pragma once
#include <vector>
#include "dice.h"

using namespace std;

class SetOfDice
{
public:
	SetOfDice();
	double getOptimalValue() { return setExpValue; }
	int roll();


private:
	vector<Dice> pluralDice;
	double setExpValue = 0.0;
	int smallest = 4;
	int largest = 8;
	TomRandom tomRandom;
};