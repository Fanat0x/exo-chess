#include "pch.h"
#include "main.h"

int main()
{
#ifdef _DEBUG

	board myBoard;
	myBoard.generate();
	myBoard.draw();
	
	


	_CrtDumpMemoryLeaks();
#endif

	return 0;
}
