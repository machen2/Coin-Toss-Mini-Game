#pragma once

#include <string>
#ifndef COIN_H
#define COIN_H

//Coin class declaration
class Coin
{
private:
	std::string sideUp;
	int value;

public:
	Coin();
	Coin(int);
	std::string getSideUp();
	int getValue();
	void toss();
};
#endif COIN_H
