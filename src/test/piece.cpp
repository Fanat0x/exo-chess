#include "pch.h"
#include "piece.h"


piece::piece()
{
	//pas toucher
}

void piece::initApiece(ChessType cType, bool isWhite)
{
    firstMove = true;
	CType = cType;
	White = isWhite;



    switch (CType)
    {
    case 0:
        if (White == true)
        {
            Skin = "P ";
        }

        else
        {
            Skin = "p ";
        }
        break;

    default:
        std::cout << "? "; // Caractère de remplacement
        break;
    }

}

//void piece::generateSet1Pieces()
//{
//	initApiece(pawn, true);
//	initApiece(pawn, false);
//}

bool piece::moveRequest(int OldX, int OldY, int NewX, int NewY)
{
    return false;
}