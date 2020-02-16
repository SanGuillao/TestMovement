#pragma once

#include <iostream>
#include <windows.h>

void SetWindow(int Width, int Height);
void GoToXY(int x, int y);
char getCursorChar();

class TestMovement
{
	private:
		struct User
		{
			int current_row, current_col;
			char c;
				User();
		};

		char stage[5][50] = {"################################################",
							  "#                                              #",
							  "#                                              #",
							  "#                                           !  #",
							  "################################################" };

		bool endgame = false;

	public:
		void Start();
		void Display();
		void UserMovement(User&);
		bool CheckForCollision(int, int, User&);
};
