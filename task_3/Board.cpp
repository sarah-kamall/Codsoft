#include "Board.h"
#include <iostream>

Board::Board()
{
	displayboad();
}

void Board::displayboad()
{
	for (int i = 0;i < 3;i++)
	{
		std::cout << " | ";
		for (int j = 0;j < 3;j++)
		{
			if (boardplay[i][j] == '0')
				std::cout << boardel[i][j] << " | ";
			else
			{
				
				std::cout << boardplay[i][j] << " | ";
			}
				
			
		}
		std::cout << "\n  -----------\n";
	}
}

bool Board::checkifwin(int placement, char symb)
{
	int row = getrow(placement);
	int col = getcol(placement);
	if (checkrow(row, col, symb) || checkcol(row, col, symb) || checkdiag(row, col, symb))
	{
		return 1;
	}
	else
		return 0;

}

bool Board::checkrow(int row, int col, char symb)
{
	for (int i = 0; i < 3;i++)
	{
		if (boardplay[row][i] == symb)
			continue;
		else
			return 0;
	}
	return 1;
}

bool Board::checkcol(int row, int col, char symb)
{
	for (int i = 0; i < 3;i++)
	{
		if (boardplay[i][col] == symb)
			continue;
		else
			return 0;
	}
	return 1;
}

bool Board::checkdiag(int row, int col, char symb)
{
	if (row == col)
	{
		if (boardplay[0][0] == symb && boardplay[1][1] == symb && boardplay[2][2] == symb)
			return 1;
	}
	else if ((row == 0 && col == 2) || (row == 1 && col == 1) || (row == 2 && col == 0))
		if (boardplay[0][2] == symb && boardplay[1][1] == symb && boardplay[2][0] == symb)
			return 1;
	return false;
}

int Board::placesymb(int placement, char symb)
{
	int row,col;
	row = getrow(placement);
	col = getcol(placement);
	if (boardplay[row][col] == 'o' || boardplay[row][col] == 'x')
		return -1;
	else
		boardplay[row][col] = symb;
	return 1;
}

int Board::getrow(int placement)
{
	int row;
	if (placement % 3 == 0)
	{
		row = placement / 3 - 1;
		
	}

	else
	{
		row = placement / 3;
		
	}
	return row;
}

int Board::getcol(int placement)
{
	int col;
	if (placement % 3 == 0)
	{
		
		col = 2;
	}

	else
	{
		
		col = placement % 3 - 1;
	}
	return col;
}
