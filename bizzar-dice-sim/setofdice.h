#pragma once
#include <vector>
#include "dice.h"

using namespace std;

class SetOfDice
{
public:
	SetOfDice();
	double getOptimalValue();
	int roll();


private:
	vector<Dice> pluralDice;
	int smallest = 4;
	int largest = 8;

};