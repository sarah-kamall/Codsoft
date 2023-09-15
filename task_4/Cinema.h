#pragma once
#include"Movie.h"
#include"User.h"

class Cinema
{
	Movie* m;
	int numofm;
	User* u;
public:
	Cinema(int numofmovies, int numofseats, string *movienames , float *ratings, int* ticketp);
	void display();
	int Book(int i);
	void driver();

};
