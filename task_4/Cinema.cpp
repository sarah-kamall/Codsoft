#include "Cinema.h"

Cinema::Cinema(int numofmovies, int numofseats, string* movienames, float* ratings, int *ticketp)
{
	numofm = numofmovies;
	m = new Movie[numofmovies];
	for (int i = 0;i < numofmovies;i++)
	{
		m[i] = Movie(movienames[i], ratings[i], numofseats, ticketp[i]);
	}
	u = new User;
}

void Cinema::display()
{
	cout << " Welcome to The cinema" << endl;
	cout << " number of available movies: " << numofm<<endl;
	for (int i = 0;i < numofm;i++)
	{
		cout << "((((" << i + 1 << "))))\n";
		m[i].displaymovie();
	}
}

int Cinema::Book(int i)
{
	i = i - 1;
	m[i].displaytheatre();
	cout << "\nChoose your seat number\n";
	int numofseat;
	cin >> numofseat;
	while (m[i].BookTicket(numofseat) <= 0)
	{

		
		cout << "::::Seat is taken , Try again:::\n";
		cin >> numofseat;
	}
	cout << "::::Ticket booked sucessfully:::\n";
	u->setnumoftickes(u->getnumoftickets() + 1);
	u->setcost(u->getcost() + m[i].getticketprice());
	return 1;
		

}

void Cinema::driver()
{
	int y=1;
	while (y)
	{
		cout << "New usr?\n y/n: ";
		char s;
		cin >> s;
		if (s == 'y')
		{
			u = new User();
		}
		else if (u == nullptr)
		{
			cout << "NO registered user\n";
			cout << "a new user is created\n";
			u = new User();
		}
		display();
		int i;
		cout << ":::::::Choose which movie you want:::::::\n";
		cin >> i;
		while (i < 1 || i>numofm)
		{
			cout << "::::::::Choose valid movie number:::::::::\n" << endl;
			cin >> i;
		}
		Book(i);
		cout << "User current balance : " << u->getcost() << "\n Number of tickets: " << u->getnumoftickets() << "\n";
		cout << "if you want to continue , Press 1\n";
		cin >> y;
	}
}
