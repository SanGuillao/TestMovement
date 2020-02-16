#include "Control.h"

// newx == current col of the object
// newy == current row of the object
// when calling go to XY, the parameters get switched, so XY would be [COL][ROW]

void TestMovement::UserMovement(User& newUser)
{
	if (GetAsyncKeyState(VK_LEFT) != 0)
	{
		int newx = newUser.current_col - 1;

		if (!CheckForCollision(newUser.current_row, newx, newUser))
		{
			GoToXY(newUser.current_col, newUser.current_row);
			std::cout << " ";
			GoToXY(newx, newUser.current_row);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			std::cout << newUser.c;
			newUser.current_col = newx;
			//GoToXY(0, 0);
			//Sleep(130);
		}
	}

	if (GetAsyncKeyState(VK_RIGHT) != 0)
	{
		int newx = newUser.current_col + 1;

		if (!CheckForCollision(newUser.current_row, newx, newUser))
		{
			GoToXY(newUser.current_col, newUser.current_row);
			std::cout << " ";
			GoToXY(newx, newUser.current_row);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			std::cout << newUser.c;
			newUser.current_col = newx;
			//GoToXY(0, 0);
			//Sleep(130);
		}
	}

	if (GetAsyncKeyState(VK_UP) != 0)
	{
		int newy = newUser.current_row - 1;

		if (!CheckForCollision(newy, newUser.current_col, newUser))
		{
			GoToXY(newUser.current_col, newUser.current_row);
			std::cout << " ";
			GoToXY(newUser.current_col, newy);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			std::cout << newUser.c;
			newUser.current_row = newy;
			//GoToXY(0, 0);
			//Sleep(130);
		}
	}

	if (GetAsyncKeyState(VK_DOWN) != 0)
	{
		int newy = newUser.current_row + 1;

		if (!CheckForCollision(newy, newUser.current_col, newUser))
		{
			GoToXY(newUser.current_col, newUser.current_row);
			std::cout << " ";
			GoToXY(newUser.current_col, newy);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			std::cout << newUser.c;
			newUser.current_row = newy;
			//GoToXY(0, 0);
			//Sleep(130);
		}
	}
}