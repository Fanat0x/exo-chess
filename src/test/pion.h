#include "pch.h"
#include "piece.h"

class pion:public piece
{

private:

public:
	pion();
	//~pion();
	void initPion(bool isWhite);
	virtual bool moveRequest(int OldX, int OldY, int NewX, int NewY) override;
};