#include <iostream>
#include <string>

#define ROWS 3
#define COLS 3

using namespace std;

void run_game();
void init_board(string& game_stat);
void check_winner(string board [ROWS][COLS] , string& game_stat);
void play_game(string board[ROWS][COLS]);
void update_board(string board[ROWS][COLS]);




int main()
{
	run_game();
	return 0;
}




void run_game()
{
	press_again:

	bool init_param = 0;

	string game_status = "start";

	string game_board[ROWS][COLS] = {	{ " "," "," " },
										{ " "," "," " },
										{ " "," "," " } };

	cout << "press 1 to start game" << endl;

	cin >> init_param;

	switch (init_param)
	{
	case 1:

		

		while (init_param = 1)
		{
			

			if ((game_status == "winner") || (game_status == "start") || (game_status == "draw"))
				init_board(game_status);
			else
			{
				play_game(game_board);
				check_winner(game_board, game_status);
			}




		}
	case 0:
		cout << "clossing game" << endl;
		exit(1);

	default:
		cout << "thats not a valid number please press 1 or 0" << endl;
		goto press_again;
	}


}


void init_board(string& game_stat)
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << "\n";
		
		for (int j = 0; j < COLS; j++)
		{
			cout << "_";
			
			if (j < 2)
				cout << "|";
		}
	}
	
	game_stat = "ongoing";

}

void play_game(string board[ROWS][COLS])
{
	//string rows_cols= "0 0";

	int rows, cols;

	static int turn ;

	if (turn == 0)
		turn = 1; // revise before running


	
		

	write_again:

		if (turn == 1)
		{

			cout << endl << "X's turn please write which row and column respictivly to fill (write them seprated with spaces) " << endl;

			cin >> rows >> cols;

			if ((rows > 3) || (cols > 3))
			{
				cout << "invalid number has been prompted" << endl;

				goto write_again;
			}


			if ((board[rows - 1][cols - 1] == "X") || (board[rows - 1][cols - 1] == "O"))
			{
				cout << "this cell is occupied please enter a different cell" << endl;

				goto write_again;
			}


			board[rows - 1][cols - 1] = "X";

			turn = 2;

			update_board(board);
		}

		else if (turn == 2)
		{

			cout << endl << "O's turn please write which row and columnb respictivly to fill (write them seprated with spaces) " << endl;

			cin >> rows >> cols;

			if ((board[rows - 1][cols - 1] == "X") || (board[rows - 1][cols - 1] == "O"))

			{
				cout << "this cell is occupied please enter a different cell" << endl;

				goto write_again;
			}

			board[rows - 1][cols - 1] = "O";

			turn = 1;

			update_board(board);

		}
	

}

void update_board(string board[ROWS][COLS])
{
	putchar('\f');
	for (int i = 0; i < ROWS; i++)
	{
		cout << "\n";

		for (int j = 0; j < COLS; j++)
		{
			if (board[i][j] == "X")
				cout << "X";
			else if (board[i][j] == "O")
				cout << "O";
			else
				cout << "_";
			if (j < 2)
				cout << "|";
		}
	}

}

void check_winner(string board[ROWS][COLS] , string& gamestat)
{
	// ROWS X
	int i = 0;

	cout << endl;

	if ((board[i][0] == "X") && (board[i][1] == "X") && (board[i][2] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

		 i = 1;
    }


	else if ((board[i][0] == "X") && (board[i][1] == "X") && (board[i][2] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

		 i = 2;
	}

	else if ((board[i][0] == "X") && (board[i][1] == "X") && (board[i][2] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

	}
	// ROWS O
	 i = 0;

	if ((board[i][0] == "O") && (board[i][1] == "O") && (board[i][2] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";

		 i = 1;
	}


	else if ((board[i][0] == "O") && (board[i][1] == "O") && (board[i][2] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";

		 i = 2;
	}

	else if ((board[i][0] == "O") && (board[i][1] == "O") && (board[i][2] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";

	}
	//COLS O

	i = 0;

	if ((board[0][i] == "O") && (board[1][i] == "O") && (board[2][i] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";

		i = 1;
	}


	else if ((board[0][i] == "O") && (board[1][i] == "O") && (board[2][i] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";

		i = 2;
	}

	else if ((board[0][i] == "O") && (board[1][i] == "O") && (board[2][i] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";

	}

	// COLS X
	i = 0;

	if ((board[0][i] == "X") && (board[1][i] == "X") && (board[2][i] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

		i = 1;
	}


	else if ((board[0][i] == "X") && (board[1][i] == "X") && (board[2][i] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

		i = 2;
	}

	else if ((board[0][i] == "X") && (board[1][i] == "X") && (board[2][i] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

	}
  // diagonals X and O
	if ((board[0][0] == "X") && (board[1][1] == "X") && (board[2][2] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

	
	}


	else if ((board[0][2] == "X") && (board[1][1] == "X") && (board[2][0] == "X"))
	{
		cout << "X is winner" << endl;

		gamestat = "winner";

		
	}

	if ((board[0][0] == "O") && (board[1][1] == "O") && (board[2][2] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";


	}


	else if ((board[0][2] == "O") && (board[1][1] == "O") && (board[2][0] == "O"))
	{
		cout << "O is winner" << endl;

		gamestat = "winner";


	}






}