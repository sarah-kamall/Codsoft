#pragma once
#include<iostream>
using namespace std;
class Theatre
{
	int* seats;
	bool* available;
	int numofseats;
	int numbooked = 0;
public:
	Theatre(int numofseats);
	int Book(int seatnum);
	int checkvac();
	void display();
};

