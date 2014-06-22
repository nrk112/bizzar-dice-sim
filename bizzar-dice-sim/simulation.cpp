#include "simulation.h"
#include "player.h"
#include <iostream>

using namespace std;

double Simulation::optimalStrategy(int &plays)
{
	double total = 0, roll = 0;
	for (int i = 0; i < plays; i++)
	{
		roll = setOfDice.roll(); //first roll
		if (roll > setOfDice.getOptimalValue())   //check if greater than expected value of dice set.
		{
			total += roll; //add first roll
		}
		else
		{
			total += setOfDice.roll(); //add reroll
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
	double total = 0;
	for (int i = 0; i < plays; i++)
	{
		total += setOfDice.roll();
	}
	return (total / plays);
}

double Simulation::comparison(int &plays)
{
	int wins = 0;
	int j = 1;
	for (int &i = j; i < plays; i++)
	if (optimalStrategy(i) > neverReroll(i))
	{
		wins++;
	}
	double value = (wins / plays) * 100;
	//cout << wins / plays << endl;
	return wins;
}