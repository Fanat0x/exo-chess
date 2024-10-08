#include "pch.h"
#include "board.h"

board::board()
{
	//pas toucher
}

void board::generate()
{
	Height = 8;
	Width = 8;

    // Initialiser tous les pointeurs à nullptr
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Board[row][col] = nullptr; // Initialisation des pointeurs à nullptr
        }
    }
}


void board::move(int oldX, int oldY, int NewX, int NewY)
{
    piece* Piece = Board[oldX][oldY];
    Board[NewX][NewY] = Piece;
    Board[oldX][oldY] = nullptr;
}

void board::draw()
{
    // Dessiner le tableau
    for (int row = 0; row < Height; row++)
    {
        for (int col = 0; col < Width; col++)
        {
            if (Board[row][col] == nullptr)
            {
                std::cout << ". ";  // Case vide
            }
            else
            {
                std::cout << Board[row][col]->Skin << " ";
            }
        }
        std::cout << std::endl; // Nouvelle ligne pour chaque rangée
    }

    // Ajouter la délimitation en dessous du tableau
    std::cout << std::string(Width * 2, '-') << std::endl;
}