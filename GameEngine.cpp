#include "GameEngine.h"

void GameEngine::setDifficulty(int n)
{
	this->difficulty = n;
}
int GameEngine::getDifficulty()
{
	return this->difficulty;
}
void GameEngine::setTutorial(bool status)
{
	tutorial = status;
}
bool GameEngine::getTutorial()
{
	return this->tutorial;
}
double GameEngine::getAccountBalance()
{
	return this->accountBalance;
}
void GameEngine::setAccountBalance(double bal)
{
	this->accountBalance = bal;
}
