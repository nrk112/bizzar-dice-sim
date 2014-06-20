#include <iostream>
#include <time.h>
#include "simulation.h"
#include "setofdice.h"

using namespace std;

void Simulation::start()
{
	SetOfDice setofDice;
	cout << "Welcome to the Bizzaro World Dice Simulator\n"
		<< "============================================\n";
	
	int input = 1;
	int plays = 200; //Change to 20000 before submission.
	do
	{
		cout << "Which simulation would you like to run?\n"
			<< "1. Optimal strategy.\n"
			<< "2. Always reroll.\n"
			<< "3. Never reroll.\n"
			<< "4. COP3014 Suite\n"
			<< "5. Exit Simulation\n"
			<< ">>";
		cin >> input;

		switch (input)
		{
		case 1:
			setofDice.optimalStrategy(plays);
			break;
		case 2:
			setofDice.alwaysReroll(plays);
			break;
		case 3:
			setofDice.neverReroll(plays);
		case 4:
			setofDice.optimalStrategy(plays);
			setofDice.neverReroll(plays);
			comparison();
			break;
		case 5:
			return;
		default:
			cout << "Please enter a number 1 - 5.\n";
			break;
		}
	} while (input != 0);

}


double Simulation::comparison()
{
	double value;
	return value;
}