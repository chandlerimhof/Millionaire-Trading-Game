#pragma once
#include <vector>
#include "Stock.h"

class GameEngine
{
private:
	bool tutorial;
	int difficulty;
	double accountBalance;
	std::vector<Stock> portfolio;

public:
	void setDifficulty(int n);
	int getDifficulty();

	void setTutorial(bool status);
	bool getTutorial();

	double getAccountBalance();
	void setAccountBalance(double bal);

};

