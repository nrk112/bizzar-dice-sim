#include "simulation.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int plays = 20000;
	Simulation simulation;
	string output;
	string again;
	int input = 0;

	cout << "Welcome to the Bizzaro World Dice Game Simulator\n"
		<< "=================================================\n";

	do
	{
		cout << "Which simulation would you like to run?\n"
			<< "1. COP3014 Suite.\n"
			<< "2. Optimal strategy.\n"
			<< "3. Always reroll.\n"
			<< "4. Never reroll.\n"
			<< "5. Exit Simulation\n"
			<< ">>";
		cin >> input;

		switch (input)
		{
		case 1:
			output = "The player with the optimal strategy will average a score of ";
			output += to_string(simulation.optimalStrategy(plays));
			output += "!\n";
			output += "The player that never rerolls the dice will average a score of ";
			output += to_string(simulation.neverReroll(plays));
			output += "!\n";
			output += "The player with the optimal strategy will win ";
			output += to_string(simulation.comparison(plays));
			output += "% of the time!\n";
			break;
		case 2:
			output = "The player with the optimal strategy will average a score of ";
			output += to_string(simulation.optimalStrategy(plays));
			output += "!\n";
			break;
		case 3:
			output = "The player that always rerolls the dice will average a score of ";
			output += to_string(simulation.alwaysReroll(plays));
			output += "!\n";
			break;
		case 4:
			output = "The player that never rerolls the dice will average a score of ";
			output += to_string(simulation.neverReroll(plays));
			output += "!\n";
			break;
		case 5:
			cout << "Thanks for pretending to play!" << endl;
			return 0;
		default:
			output = "Please enter a number 1 - 5.\n";
			break;
		}
		cout << "\n\n" 
			<< "********************************************************************************"
			<< output 
			<< "\n********************************************************************************"
			<< "\n\n\n"
			<< "Would you like to play again? (y or n):";
		cin >> again;
		(again == "y" || again == "Y") ? (input = 0) : (input = 5);
		system("cls");
	} while (input != 5);
	return 0;
}