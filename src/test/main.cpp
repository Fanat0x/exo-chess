#include "pch.h"
#include "main.h"

int main()
{
#ifdef _DEBUG

	board myBoard;
	myBoard.generate(); //créer mon board
	
	pion Pawn1;
	Pawn1.initPion(true);
	myBoard.Board[0][0] = &Pawn1;
	
	piece BlackPawn;
	BlackPawn.initApiece(pawn, false); // créer un pion noir

	myBoard.Board[7][0] = &BlackPawn;
	myBoard.draw();

	myBoard.move(0, 0, 1, 0);
	myBoard.draw();
	


	_CrtDumpMemoryLeaks();
#endif

	return 0;
}
