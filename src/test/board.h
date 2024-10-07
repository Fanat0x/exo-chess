
#include "pch.h"
#include <Windows.h>
#include "piece.h"
#include <iostream>
#include <vector>

class board
{
private:
	board();
	void generate();

public:
	int Width;
	int Height;
	piece* Board [8][8];
	
	void draw();
};


 