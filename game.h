#ifndef _GAME_H
#define _GAME_H

class JogoForca{
    
    private:
        int cont_letra;

    public:

        JogoForca();
        int Menu();
        void FaseJogo(int fase);
        void ModoGame(int Modo);
        void SinglePlayer();
        void MultiPlayer();
        void Exit();

};

#endif