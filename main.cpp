#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    JogoForca *F = new JogoForca();
    
    F->ModoGame(F->Menu());
    
    return 0;
}