#pragma once 
#include <iostream>

enum ChessType
{
	pawn,
	bishop,
	knight,
	rook,
	queen,
	king
};

class piece
{
private:
	
	

public:

	piece();
	//~piece();

	void initApiece(ChessType cType, bool isWhite);
	void generateSet1Pieces();
	virtual bool moveRequest(int OldX, int OldY, int NewX, int NewY);

	ChessType CType;
	bool White;
	const char* Skin;
	bool firstMove;

}; 