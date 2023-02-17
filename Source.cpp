////basic tic-tac-toe program, 1/23 jp-ind
//
////v1- very fundamental mechanics- board generation, player piece assignment
////v2- some cleanup, a little simpler. Doesn't actually place pieces.
// v3- serious cleanup and refactoring, pieces placed fine. Only needs score algo now.
//
#include "c:\Users\james\Desktop\std_lib_facilities.h"
//
//int allocpiece()
//{
//	srand(time(0)); //seed for random number generator. Will generate new seed every time it's called-fix!
//	int xo = rand(); //generate and assign random value.
//	if (xo % 2 == 0) {
//		cout << "P1 is X\n";//parity determines p1 piece.
//		return 0;
//	}
//		
//	else cout << "P1 is O\n";
//	return 1;
//}
//
//int turn()
//{
//	for (int turn = 1;; ++turn)
//		if (turn % 2 == 0) { //p1 starts. turn is based on parity.
//			cout << "P1 turn!\n";
//			return 0;
//		}
//		else cout << "P2 turn!\n";
//	return 1;
//}
//
//int main()
//{

//
//	char currentpiece = ' '; //determines whose turn it is, and what piece is in play.
//	int currentturn = turn(); //get turn value from function call.
//
//	char p1piece = ' '; //initialisation, defaults.
//	char p2piece = ' ';
//
//	switch (currentturn) {
//	case 0: {currentpiece = p1piece; break; }
//	case 1: {currentpiece = p2piece; break; }
//	default: {cout << "poop"; }
//	}
//
//	vector<char> pieces = { 'X', 'O' };
//	for (int i = 0; ; ++i) {
//
//	}
//
//	int pos = 0; //initialises default board position.
//	while (true){
//		cin >> pos;
//
//		switch (pos) {
//		case 1: { a1 = currentpiece; break; }
//		case 2: {b1 = currentpiece; break; }
//		case 3: {c1 = currentpiece; break; }
//		case 4: {a2 = currentpiece; break; }
//		case 5: {b2 = currentpiece; break; }
//		case 6: {c2 = currentpiece; break; }
//		case 7: {a3 = currentpiece; break; }
//		case 8: {b3 = currentpiece; break; }
//		case 9: {c3 = currentpiece; break; }
//		default: {cout << "Invalid position!"; break; }
//		}
//
//		for (char things : r1) { //board state
//			cout << things;
//		}
//	}
//
//
//
//
//}

int main()
{
	vector<char> pieces = { 'X', 'O' };
	int turn = 1;
	char currentpiece = ' ';
	int pos = 0; //initialises board cursor position.

	//initialisation of each square position.
	char a1 = '1', b1 = '2', c1 = '3';
	char a2 = '4', b2 = '5', c2 = '6';
	char a3 = '7', b3 = '8', c3 = '9';

	cout << "1|2|3\n4|5|6\n7|8|9\n"; //initial board state.

	for (int i = 0; i < 9; i++ ){ //counts number of moves taken.

		if (turn % 2 != 0) { //whose turn is it?
			cout << "p1 turn!\n";
				currentpiece = 'X'; //p1 is X by default.
				cin >> pos; //p1 inputs square for his piece.
				++turn; //turn becomes divisible by 0, p2 goes next.
		}
		else {
			cout << "p2 turn!\n";
			currentpiece = 'O';
			cin >> pos;
			++turn;
		}

		switch (pos) { //where will the piece go?
		case 1: {a1 = currentpiece; break; }
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

		vector <char> r1 = { a1, '|', b1, '|', c1, '\n', //current board state. Updates every turn.
			a2, '|', b2, '|', c2 ,'\n',
			a3, '|', b3, '|', c3 , '\n'};

		for (char things : r1) { //prints board state
			cout << things;
		}
	}
}

