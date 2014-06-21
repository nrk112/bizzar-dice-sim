#include "dice.h"
#include "simulation.h"


using namespace std;

int Dice::roll()
{
	double amt;
	amt = Simulation::tomRandom.getDouble(0,1);

}