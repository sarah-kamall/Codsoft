#include "Theatre.h"

Theatre::Theatre(int numofats)
{
	seats = new int[numofats];
	available = new bool[numofats];
	for (int i = 0;i < numofats;i++)
	{
		seats[i] = i + 1;
		available[i] = 1;
	}
	numofseats = numofats;
}

int Theatre::Book(int seatnum)
{
	if (seatnum < 1 || seatnum >numofseats)
		return (-1);
	else if (available[seatnum] == 0)
		return (-2);
	else
	{
		available[seatnum] = 0;
		numbooked++;
		return 1;
	}
}

int Theatre::checkvac()
{
	return (numofseats - numbooked);
}

void Theatre::display()
{
	cout << ":::::::::::::Theatre::::::::::::::\n";
	for (int i = 0;i < numofseats;i++)
	{
		if (available[i])
			cout << " | " << seats[i] << " | ";
		else
			cout << " | " << "x" << " | ";
		if (i % 4 == 0)
			cout << "\n -------------------------------------\n";
	}
	cout << "\n | " << "screen" << " | \n";
}
