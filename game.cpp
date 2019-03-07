#include <iostream>
#include <cstdlib>
#include "game.h"
using namespace std;

JogoForca::JogoForca()
{
    
}

int JogoForca::Menu()
{   
	int modo = 0;
	cout << "                Jogo da Forca " << endl << endl << endl;

	cout << " 	1 - Modo Multiplayer" << endl;
	cout << " 	2 - Modo Singleplayer" << endl;
	cout << " 	0 - Sair" << endl << endl;
	cout << " 	Digite o modo de jogo: ";
	cin >> modo;

    return modo;
}

void JogoForca::ModoGame(int Modo)
{
	if(Modo == 1)
	{
		MultiPlayer();
	}
	else if(Modo == 2)
	{
		SinglePlayer();
	}
	else if(Modo == 0)
	{
		Exit();
	}
	else
	{
		cout << endl << "	Modo de Jogo Inválido!" << endl;
		Exit();
	}

}

void JogoForca::SinglePlayer()
{
	cout << "Modo Single" << endl;
}

void JogoForca::MultiPlayer()
{
	cout << "Modo Multi" << endl;
}

void JogoForca::Exit()
{
	cout << endl << "	Finalizando o Jogo..." << endl;
	exit(0);
}

void JogoForca::FaseJogo(int fase)
{
    switch(fase)
    {
        case 0:
            cout << "-------------------------------------" << endl;
            cout << "          =============              " << endl;
            cout << "         |            ||             " << endl;
            cout << "         |            ||             " << endl;
            cout << "         |            ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "                      ||             " << endl;
            cout << "-------------------------------------" << endl;
        break;
        case 1:
        	cout << "-------------------------------------" << endl;
		    cout << "          =============              " << endl;
		    cout << "         |            ||             " << endl;
		    cout << "         |            ||             " << endl;
		    cout << "        _|_           ||             " << endl;
		    cout << "       /   \\          ||             " << endl;
		    cout << "      | 0 0 |         ||             " << endl;
		    cout << "       \\ - /          ||             " << endl;
		    cout << "        |_|           ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "-------------------------------------" << endl;
        break;
        case 2:
        	cout << "-------------------------------------" << endl;
		    cout << "          =============              " << endl;
		    cout << "         |            ||             " << endl;
		    cout << "         |            ||             " << endl;
		    cout << "        _|_           ||             " << endl;
		    cout << "      /   \\          ||             " << endl;
		    cout << "      | 0 0 |         ||             " << endl;
		    cout << "      \\ - /          ||             " << endl;
		    cout << "      _ |_| _         ||             " << endl;
		    cout << "       |   |          ||             " << endl;
		    cout << "       |   |          ||             " << endl;
		    cout << "       |___|          ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "-------------------------------------" << endl;
        break;
        case 3:
			cout << "-------------------------------------" << endl;
		    cout << "          =============              " << endl;
		    cout << "         |            ||             " << endl;
		    cout << "         |            ||             " << endl;
		    cout << "        _|_           ||             " << endl;
		    cout << "       /   \\          ||             " << endl;
		    cout << "      | 0 0 |         ||             " << endl;
		    cout << "       \\ - /          ||             " << endl;
		    cout << "      _ |_| _         ||             " << endl;
		    cout << "     / |   |          ||             " << endl;
		    cout << "    / /|   |          ||             " << endl;
		    cout << "   /_/ |___|          ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "                      ||             " << endl;
		    cout << "-------------------------------------" << endl;
        break;
        case 4:
        	cout << "------------------------------------- " << endl;
		    cout << "          =============               " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "        _|_           ||              " << endl;
		    cout << "       /   \\          ||              " << endl;
		    cout << "      | 0 0 |         ||              " << endl;
		    cout << "       \\ - /          ||              " << endl;
		    cout << "      _ |_| _         ||              " << endl;
		    cout << "     / |   |          ||              " << endl;
		    cout << "    / /|   |          ||              " << endl;
		    cout << "   /_/ |___|          ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "------------------------------------- " << endl;
        break;
        case 5:
        	cout << "------------------------------------- " << endl;
		    cout << "          =============               " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "        _|_           ||              " << endl;
		    cout << "       /   \\          ||              " << endl;
		    cout << "      | 0 0 |         ||              " << endl;
		    cout << "       \\ - /          ||              " << endl;
		    cout << "      _ |_| _         ||              " << endl;
		    cout << "     / |   | \\        ||              " << endl;
		    cout << "    / /|   |\\ \\       ||              " << endl;
		    cout << "   /_/ |___| \\_\\      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "                      ||              " << endl;
		    cout << "------------------------------------- " << endl;
        break;
        case 6:
        	cout << "------------------------------------- " << endl;
		    cout << "          =============               " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "        _|_           ||              " << endl;
		    cout << "       /   \\          ||              " << endl;
		    cout << "      | 0 0 |         ||              " << endl;
		    cout << "       \\ - /          ||              " << endl;
		    cout << "      _ |_| _         ||              " << endl;
		    cout << "     / |   | \\        ||              " << endl;
		    cout << "    / /|   |\\ \\       ||              " << endl;
		    cout << "   /_/ |___| \\_\\      ||              " << endl;
		    cout << "      /  _            ||              " << endl;
		    cout << "     /  /             ||              " << endl;
		    cout << "  __/  /              ||              " << endl;
		    cout << " |____|               ||              " << endl;
		    cout << "------------------------------------- " << endl;
        break;
        case 7:
        	cout << "------------------------------------- " << endl;
		    cout << "          =============               " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "         |            ||              " << endl;
		    cout << "        _|_           ||              " << endl;
		    cout << "       /   \\          ||              " << endl;
		    cout << "      | 0 0 |         ||              " << endl;
		    cout << "       \\ - /          ||              " << endl;
		    cout << "      _ |_| _         ||              " << endl;
		    cout << "     / |   | \\        ||              " << endl;
		    cout << "    / /|   |\\ \\       ||              " << endl;
		    cout << "   /_/ |___| \\_\\      ||              " << endl;
		    cout << "      /  _  \\         ||              " << endl;
		    cout << "     /  / \\  \\        ||              " << endl;
		    cout << "  __/  /   \\  \\__     ||              " << endl;
		    cout << " |____|     |____|    ||              " << endl;
		    cout << "------------------------------------- " << endl;
        break;

    }

}