#pragma once
#include"Theatre.h"
#include<iostream>
using namespace std;
class Movie
{
	Theatre T;
	float rating;
	string name;
	int ticketprice;

	
public:
	Movie(string s, int rating,int numofseats, int ticketp);
	void displaymovie();
	void displaytheatre();
	int BookTicket(int seatnum);
	int getticketprice();
	Movie();
};

