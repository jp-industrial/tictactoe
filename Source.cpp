//basic tic-tac-toe program, 1/23 jp-ind

//v1- very fundamental mechanics- board generation, player piece assignment

#include "c:\Users\james\Desktop\std_lib_facilities.h"

int allocpiece()
{
	srand(time(0)); //seed for random number generator. Will generate new seed every time it's called-fix!
	int xo = rand(); //generate and assign random value.
	if (xo % 2 == 0) {
		cout << "P1 is X\n";//parity determines p1 piece.
		return 0;
	}
		
	else cout << "P1 is O\n";
	return 1;
}

int turn()
{
	for (int turn = 1;; ++turn)
		if (turn % 2 == 0) { //p1 starts. turn is based on parity.
			cout << "P1 turn!\n";
			return 0;
		}
		else cout << "P2 turn!\n";
	return 1;
}

int main()
{
	//initialisation of each row.
	char a1 = ' ', b1 = ' ', c1 = ' ';
	char a2 = ' ', b2 = ' ', c2 = ' ';
	char a3 = ' ', b3 = ' ', c3 = ' ';

	char piece = ' ';
	if (turn() == 0) { //player one's turn.
		if (allocpiece() == 0)
			piece = 'X';
		else piece = 'O';
	}
	else {
		if (allocpiece() != 0)
			piece = 'O';
		else piece = 'X';
	}

	int pos = 0;
	cin >> pos;

	switch (pos) {
	case 1: { a1 = piece; break; }
	case 2: {b1 = piece; break; }
	case 3: {c1 = piece; break; }
	case 4: {a2 = piece; break; }
	case 5: {b2 = piece; break; }
	case 6: {c2 = piece; break; }
	case 7: {a3 = piece; break; }
	case 8: {b3 = piece; break; }
	case 9: {c3 = piece; break; }
	default: {
		cout << "Invalid position!";
		break;
	}
	}

	//arrangement of rows and borders into a convenient vector for printing etc.
	vector <char> r1 = { a1, '|', b1, '|', c1, '\n',
		a2, '|', b2, '|', c2 ,'\n',
		a3, '|', b3, '|', c3 };


	for (char things : r1) { //board state
		cout << things;
	}


}
