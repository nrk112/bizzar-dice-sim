#include "simulation.h"
#include "player.h"

using namespace std;

double Simulation::optimalStrategy(int &plays)
{
	SetOfDice optimalDice;
	double total = 0, roll = 0;
	for (int i = 0; i < plays; i++)
	{
		roll = optimalDice.roll(); //first roll
		if (roll > optimalDice.getOptimalValue())   //check if greater than expected value of dice set.
		{
			total += roll; //add first roll
		}
		else
		{
			total += optimalDice.roll(); //add reroll
		}
	}
	return (total / plays);
}

double Simulation::alwaysReroll(int &plays)
{
	return 0;
}

double Simulation::neverReroll(int &plays)
{
	SetOfDice neverDice;
	double total = 0;
	for (int i = 0; i < plays; i++)
	{
		total += neverDice.roll();
	}
	return (total / plays);
}

double Simulation::comparison(int &plays)
{
	int wins = 0;
	int j = 1;
	for (int &i = j; i < plays; i++)
	if (optimalStrategy(i) > neverReroll(i))
		wins++;

	return (wins / plays) * 100;
}