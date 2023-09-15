#pragma once
class User
{
	int numoftickets = 0;
	int totalcost = 0;
public:
	void setnumoftickes(int n);
	void setcost(int n);
	int getnumoftickets();
	int getcost();
};

