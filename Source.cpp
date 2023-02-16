//basic tic-tac-toe program, 1/23 jp-ind

//v1- very fundamental mechanics- board generation, player piece assignment
//v2- some cleanup, a little simpler. Doesn't actually place pieces.

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
	//initialisation of each position.
	char a1 = ' ', b1 = ' ', c1 = ' ';
	char a2 = ' ', b2 = ' ', c2 = ' ';
	char a3 = ' ', b3 = ' ', c3 = ' ';

	//arrangement of rows and borders into a convenient vector for printing etc.
	vector <char> r1 = { a1, '|', b1, '|', c1, '\n',
		a2, '|', b2, '|', c2 ,'\n',
		a3, '|', b3, '|', c3 };

	char p1piece = ' ';
	char p2piece = ' ';

	switch (allocpiece()) { //player piece allocator. Should only be called once.
	case 0: {p1piece = 'X'; p2piece = 'O'; break; }
	case 1: {p1piece = 'O'; p2piece = 'X'; break; }
	default: {cout << "poop"; }
	}

	char currentpiece = ' '; //determines whose turn it is, and what piece is in play.
	switch (turn()) {
	case 0: {currentpiece = p1piece; break; }
	case 1: {currentpiece = p2piece; break; }
	default: {cout << "poop"; }
	}

	int pos = 0; //initialises default board position.
	while (true){
		cin >> pos;

		switch (pos) {
		case 1: { a1 = currentpiece; break; }
		case 2: {b1 = currentpiece; break; }
		case 3: {c1 = currentpiece; break; }
		case 4: {a2 = currentpiece; break; }
		case 5: {b2 = currentpiece; break; }
		case 6: {c2 = currentpiece; break; }
		case 7: {a3 = currentpiece; break; }
		case 8: {b3 = currentpiece; break; }
		case 9: {c3 = currentpiece; break; }
		default: {cout << "Invalid position!"; break; }
		}

		for (char things : r1) { //board state
			cout << things;
		}
	}




}
