#include <iostream>
#ifndef HEADER_H

class Player {       
    public:
        int balance;
    Player(int Balance)
    {
        balance = Balance;
    }


};

Player CreatePlayer();
Player UpdateBalance(int, Player);
int GetResult();
int SpinResult(int result, int bet);
int EnterBet(Player player)

#endif


