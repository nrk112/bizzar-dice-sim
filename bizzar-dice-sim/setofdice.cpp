#include "setofdice.h"
#include "dice.h"
#include <vector>

using namespace std;

//Loads dice objects into pluralDice vector.
SetOfDice::SetOfDice()
{
	int numberOfDice = (largest - smallest + 1);
	for (int i = 0; i < numberOfDice; i++)
	{
		Dice dice;
		pluralDice.push_back(dice);
	}
}


int SetOfDice::roll()
{
	int sumOfDice = 0;
	for (int i = 0; i < pluralDice.size(); i++)
	{
		sumOfDice += pluralDice[i].roll;
	}
	return sumOfDice;
}

double SetOfDice::getOptimalValue()
{
	double ev = 0;
	for (int i = 0; i < pluralDice.size(); i++)
	{
		ev += pluralDice[i].expValue();
	}
	return ev;
}