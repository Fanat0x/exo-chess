#pragma once 
#include <Windows.h>
#include "piece.h"
#include <iostream>
#include <vector>

class board
{
private:

	

public:
	board();
	//~board();
	void generate();
	int Width;
	int Height;
	piece* Board [8][8];
	
	void draw();
};


 