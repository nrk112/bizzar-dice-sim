#include "setofdice.h"
#include "dice.h"
#include <vector>

using namespace std;

SetOfDice::SetOfDice()
{
	const int numberOfDice = 5;
	for (int i = 0; i < numberOfDice; i++)
	{
		Dice dice;
		pluralDice.push_back(dice);
	}
	optimalValue = getOptimalValue();
}


int SetOfDice::roll()
{
	Dice dice;
	int total = 0;
	vector<int> dicev;
	//dice.getSize(dicev);
	for (int sides = dicev[0]; sides <= dicev[1]; sides++)
	{
	//	total += dice.getValue(sides);
	}
	return total;
}
double SetOfDice::optimalStrategy(int)
{

	return 0;
}

double SetOfDice::alwaysReroll(int)
{

	return 0;
}

double SetOfDice::neverReroll(int)
{

	return 0;
}

float SetOfDice::getOptimalValue()
{

	return 0;
}