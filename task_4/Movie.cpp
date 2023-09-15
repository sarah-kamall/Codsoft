#include "Movie.h"

Movie::Movie():T(0)
{
}

Movie::Movie(string s,int rating, int numofseats, int ticketp):T(numofseats)
{
	this->rating = rating;
	name = s;
	ticketprice = ticketp;
}

void Movie::displaymovie()
{
	cout << "        Movie Name :   " << name << endl;
	cout << "        Rating :     " << rating << endl;
	cout << "        Number of available seats " << T.checkvac() << endl;
}

void Movie::displaytheatre()
{
	T.display();
}

int Movie::BookTicket(int seatnum)
{
	T.display();
	return (T.Book(seatnum));
}

int Movie::getticketprice()
{
	return ticketprice;
}
