#pragma once
#include <vector>
#include "dice.h"

using namespace std;

class SetOfDice
{
public:
	SetOfDice();
	float getOptimalValue();
	int roll();
	double optimalStrategy(int);
	double alwaysReroll(int);
	double neverReroll(int);

private:
	vector<Dice> pluralDice;
	float optimalValue;


};