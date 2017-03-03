#include "Coin.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	//Set seed
	srand(time(NULL));

	//Initialize variables and objects

	int totalBalance = 0;
	Coin quarter(25);
	Coin nickel(5);
	Coin dime(10);
	char input;
	int roundCount = 0;

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

	cout << " The current side facing up for each coin is:" << endl << endl;
	cout << "   Quarter: " << quarter.getSideUp() << "." << endl;
	cout << "   Dime: " << dime.getSideUp() << "." << endl;
	cout << "   Nickel: " << nickel.getSideUp() << "." << endl << endl;
	cout << " Your balance is " << totalBalance << " cents." << endl << endl;

	cout << " Press [ENTER] to begin or type 'Q' to quit.\n";

	input = cin.get();
	cin.ignore(100, '\n');
	input = toupper(input);

	if (input == 'Q') {
		return 0;
	}

	while (input != 'Q' && totalBalance < 100) {
		roundCount++;

		cout << " ----------\n";
		cout << "| Round " << roundCount << ": |\n";
		cout << " ----------\n";

		cout << " Tossing coins..." << endl << endl;

		quarter.toss();
		dime.toss();
		nickel.toss();

		cout << " The outcome of this toss is:" << endl << endl;
		cout << "   Quarter: " << quarter.getSideUp() << "." << endl;
		cout << "   Dime: " << dime.getSideUp() << "." << endl;
		cout << "   Nickel: " << nickel.getSideUp() << "." << endl << endl;

		if (quarter.getSideUp() == "heads")
			totalBalance += quarter.getValue();

		if (dime.getSideUp() == "heads")
			totalBalance += dime.getValue();

		if (nickel.getSideUp() == "heads")
			totalBalance += nickel.getValue();

		cout << " Your new balance is " << totalBalance << " cents." << endl << endl;

		//Check total balance to see if the game is over
		if (totalBalance == 100) {
			cout << "~~~~~~~~~~~ Game Over ~~~~~~~~~~~" << endl;
			cout << " YOU WON!! Congratulations!" << endl << endl;
		}
		else if (totalBalance > 100) {
			cout << "~~~~~~~~~~~ GAME OVER ~~~~~~~~~~~" << endl;
			cout << " You lost. Better luck next time!" << endl << endl;
		}
		else {
			cout << "Press [ENTER] to move to the next round." << endl;
			input = cin.get();
			cin.ignore(100, '\n');
			input = toupper(input);
		}
	}

	return 0;
}