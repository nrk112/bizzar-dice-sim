#pragma once
#include <string>
#include "player.h"
#include "setofdice.h"

using namespace std;

class Simulation
{
public:
	double optimalStrategy(int &plays);
	double alwaysReroll(int &plays);
	double neverReroll(int &plays);
	double comparison(double &optimal, double &never);


private:
	Player player;
	SetOfDice setOfDice;


};