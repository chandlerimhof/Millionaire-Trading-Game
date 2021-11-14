#include "Menu.h"
#include <iostream>
#include <string>

using namespace std;

void loadIntro() {
	cout << "Welcome to the Millionaire Stock Market Game! \n\n" <<
		"In order to be eligible for the million dollar prize raffle\n" <<
		"you must accumulate an account balance of one million dollars ($1,000,000)\n" <<
		"of in game currency.\n\n" <<

		"However, be warned this is no easy feat. You'll need a little luck with a \n" <<
		"whole lot of skill to master the trading game. Too much risk, and you may lose it all!\n" <<

		"Best of luck! When you are ready, please select the appropriate opton below:\n\n";
}

void tutorialOpt()
{
	char option;
	cout << "Is this your first time playing?\n"
			"Press Y for Yes\n"
			"Press N for No\n";
	cin >> option;
	if (option == 'Y' || option == 'y') {
		
	}
}







