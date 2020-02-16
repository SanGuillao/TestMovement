#include "Control.h"

TestMovement::User::User()
{
	current_row = 1;
	current_col = 1;
	c = '@';
}

void TestMovement::Display()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			std::cout << stage[i][j];
		}
		std::cout << std::endl;
	}
	
}

bool TestMovement::CheckForCollision(int row, int col, User& newUser)
{
	if (stage[row][col] == ' ')
	{
		return false;
	}
	else if (stage[row][col] == '!')
	{
		endgame = true;
		return true;
	}

	return true;
}

void TestMovement::Start()
{
	User newUser;
	
	Display();
	while (endgame == false)
	{
		UserMovement(newUser);
		Sleep(90);
	}
	
}