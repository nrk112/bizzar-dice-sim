#include "setofdice.h"
#include "dice.h"
#include <vector>
#include <iostream>

using namespace std;


SetOfDice::SetOfDice()
{
	int numberOfDice = (largest - smallest + 1);
	int currentSize = smallest;
	for (int i = 0; i < numberOfDice; i++)
	{
		Dice dice;
		dice.setSize(currentSize);
		setExpValue += dice.expValue();   //accumulate expected value for the set of dice.
		//setExpValue += dice.getExpValue();
		currentSize++;
		pluralDice.push_back(dice);       //Loads dice objects into pluralDice vector.
		//cout << setExpValue << endl;
	}
}


int SetOfDice::roll()
{
	int sumOfDice = 0;
	for (unsigned int i = 0; i < pluralDice.size(); i++)
	{
		sumOfDice += pluralDice[i].roll(tomRandom);
	}
	return sumOfDice;
}
