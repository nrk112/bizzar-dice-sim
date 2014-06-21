#pragma once
#include "TomRandom.h"

using namespace std;

class Dice
{
public:
	int roll();
	double expValue() { return 3.5; }


private:
	int sides;

};
