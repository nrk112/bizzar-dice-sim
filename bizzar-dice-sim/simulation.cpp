#include "simulation.h"
#include "player.h"

using namespace std;

double Simulation::optimalStrategy(int &plays)
{
	double totalScore = 0.0, roll = 0;
	for (int i = 0; i < plays; i++)
	{
		roll = setOfDice.roll();						//first roll
		if (roll > setOfDice.getOptimalValue())			//check if greater than expected value of dice set.
		{
			totalScore += roll;							//add first roll
		}
		else
		{
			totalScore += setOfDice.roll();				//add reroll
		}
	}
	return (totalScore / plays);
}

double Simulation::alwaysReroll(int &plays)
{
	double totalScore = 0.0;
	for (int i = 0; i < plays; i++)
	{
		setOfDice.roll();
		totalScore += setOfDice.roll();
	}
	return (totalScore / plays);
}

double Simulation::neverReroll(int &plays)
{
	double totalScore = 0.0;
	for (int i = 0; i < plays; i++)
	{
		totalScore += setOfDice.roll();
	}
	return (totalScore / plays);
}

double Simulation::comparison(int &plays)
{
	double wins = 0.0;
	int j = 1;
	int &k = j;
	for (int i = 1; i < plays; i++)
	{
		if (optimalStrategy(k) > neverReroll(k))
		{
			wins++;
		}
	}
	return (wins / plays) * 100;
}