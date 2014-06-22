#include "dice.h"
#include "simulation.h"


using namespace std;


//WHY CAN I NOT SET AN EXPECTED VALUE HERE?
Dice::Dice()
{
	//for (int i = 1; i <= size; i++)
	//{
	//	expectedValue += i*(1.0 / size);
	//}
}


int Dice::roll()
{
	return tomRandom.getInt(1,size);
}

double Dice::expValue()
{
	double ev = 0;
	for (int i = 1; i <= size; i++)
	{
		ev += i*(1.0 / size);
	}
	return ev;
}