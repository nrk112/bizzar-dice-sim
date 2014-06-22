#include "setofdice.h"
#include "dice.h"
#include <vector>
#include <iostream>

using namespace std;

//Loads dice objects into pluralDice vector.
SetOfDice::SetOfDice()
{
	int numberOfDice = (largest - smallest + 1);
	int currentSize = smallest;
	for (int i = 0; i < numberOfDice; i++)
	{
		Dice dice;
		dice.setSize(currentSize);
		currentSize++;
		pluralDice.push_back(dice);
	}

	//Gets expected value of set for optimal value


}


int SetOfDice::roll()
{
	int sumOfDice = 0;
	for (unsigned int i = 0; i < pluralDice.size(); i++)
	{
		sumOfDice += pluralDice[i].roll();
	}
	return sumOfDice;
}

double SetOfDice::getOptimalValue()
{
	double ev = 0;
	for (unsigned int i = 0; i < pluralDice.size(); i++)
	{
		ev += pluralDice[i].expValue();
//		cout << "EV is: " << ev << "\n";
	}
	return ev;
}