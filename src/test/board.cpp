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

void board::draw()
{
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
                int piece = Board[row][col]->type;

                switch (piece)
                {
                case 0:
                    std::cout << "P ";  // Pion blanc
                    break;
                case 1:
                    std::cout << "p ";  // Pion noir
                    break;
                default:
                    std::cout << "? "; // Caractère de remplacement
                    break;
                }
            }
            
        }
        std::cout << std::endl; // Nouvelle ligne pour chaque rangée
    }
}