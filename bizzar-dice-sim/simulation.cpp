#include "simulation.h"
#include "player.h"

using namespace std;

double Simulation::optimalStrategy(int &plays)
{
	SetOfDice setOfDice;
	setOfDice.roll();


	return 0;
}

double Simulation::alwaysReroll(int &plays)
{


	return 0;

}

double Simulation::neverReroll(int &plays)
{
	SetOfDice setOfDice;
	double total = 0;
	for (int i = 0; i < plays; i++)
	{
		total += setOfDice.roll();
	}
	total = total / plays;
	return total;
}

double Simulation::comparison(double &optimal, double &never)
{
	double percentage = 0;
	percentage = never / optimal;
	return percentage;
}