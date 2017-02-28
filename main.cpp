#include "Coin.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Initialize variables

	int totalBalance = 0;

	//Welcome Message and Directions

	string welcome = "                  ____      _         _____\n"
"                 / ___|___ (_)_ __   |_   _|__  ___ ___ \n"
"                | |   / _ \\| | \'_ \\    | |/ _ \\/ __/ __|\n"
"                | |__| (_) | | | | |   | | (_) \\__ \\__ \\ \n"
"                 \\____\\___/|_|_|_|_| __|_|\\___/|___/___/ \n"
"                |  \\/  (_)_ __ (_)  / ___| __ _ _ __ ___   ___ \n"
"                | |\\/| | | \'_ \\| | | |  _ / _` | \'_ ` _ \\ / _ \\ \n"
"                | |  | | | | | | | | |_| | (_| | | | | | |  __/ \n"
"                |_|  |_|_|_| |_|_|  \\____|\\__,_|_| |_| |_|\\___|"; 

	cout << welcome << endl << endl;

	cout << " Welcome to the Coin Toss Mini Game!" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << " -------------\n";
	cout << "| Directions: |  During each round of the game, a quarter, dime, and nickel\n";
	cout << " -------------   will be tossed. When a tossed coin lands heads-up, the\n";
	cout << " value of that coin is added to your balance. If the coin lands tails-up,\n";
	cout << " nothing is added to your balance. The game is over when your balance hits\n";
	cout << " one dollar or more. If your balance hits EXACTLY one dollar at the end of\n";
	cout << " the game, YOU WIN! Otherwise, if your balance exceeds one dollar, you lose." << endl << endl;

	cout << " Press [ENTER] to begin.\n\n";

	Coin quarter(25);
	Coin nickel(5);
	Coin dime(10);

	return 0;
}