#include "User.h"

void User::setnumoftickes(int n)
{
	numoftickets = n;
}

void User::setcost(int n)
{
	totalcost = n;
}

int User::getnumoftickets()
{
	return numoftickets;
}

int User::getcost()
{
	return totalcost;
}
