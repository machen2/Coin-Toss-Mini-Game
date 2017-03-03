#include "Coin.h"
#include <cstdlib>
#include <ctime>

/**********************************************************
*                      Coin::Coin						  *
* This is the constructor. It determines the side of the  *
* coin that is facing up ("heads" or "tails") randomly.   *
* Initializes the sideUp member variable.                 *
**********************************************************/
Coin::Coin()
{
	int x = rand() % 2;

	if (x == 0)
	{
		sideUp = "heads";
	}
	else
	{
		sideUp = "tails";
	}
}

/**********************************************************
*                      Coin::Coin(value)     			  *
* This is the constructor. It determines the side of the  *
* coin that is facing up ("heads" or "tails") randomly.   *
* Initializes the sideUp member variable.                 *
**********************************************************/
Coin::Coin(int coinValue)
{	
	value = coinValue;

	int x = rand() % 2;

	if (x == 0)
	{
		sideUp = "heads";
	}
	else
	{
		sideUp = "tails";
	}
}

/**********************************************************
*                      Coin::toss                         *
* This function randomly determines the side of the coin  *
* that is facing up and sets the sideUp menber variable   *
* accordingly.                                            *
**********************************************************/
void Coin::toss()
{
	int x = rand() % 2;

	if (x == 0)
	{
		sideUp = "heads";
	}
	else
	{
		sideUp = "tails";
	}
}

/**********************************************************
*                      Coin::getSideUp                    *
* This function reutrns the value in the member variable  *
* sideUp.                                                 *
**********************************************************/
std::string Coin::getSideUp()
{
	return sideUp;
}

/**********************************************************
*                      Coin::getValue                     *
* This function reutrns the value in the member variable  *
* value.                                                  *
**********************************************************/
int Coin::getValue()
{
	return value;
}