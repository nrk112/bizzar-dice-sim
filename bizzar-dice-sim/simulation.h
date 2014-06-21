#pragma once
#include "player.h"
#include "setofdice.h"
#include "TomRandom.h"

using namespace std;

class Simulation
{
public:
	double optimalStrategy(int &plays);
	double alwaysReroll(int &plays);
	double neverReroll(int &plays);
	double comparison(int &plays);



private:
	SetOfDice setOfDice;
	TomRandom tomRandom;
};