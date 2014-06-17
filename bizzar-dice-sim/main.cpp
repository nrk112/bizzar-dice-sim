#include <iostream>
#include <time.h>
#include "setofdice.h"

using namespace std;

int main()
{
	cout << "Welcome to the Bizzaro World Dice Game (Simulation)!" 
		<< "===================================================="
		<< endl;

	int plays = 200;			//Change to 20000 before submission.
	SetOfDice simulation;		//Create game simulation object.
	simulation.run();			//Start game simulation.



	return 0;
}