#include <iostream>
#include <ctime>
#include "Header.h";

using namespace std;

Player CreatePlayer() {
	
    cout << "Enter the amount you want to deposit to your accout, you can enter either 100, 300 or 500" << endl;
    string input;
    cin >> input;

    while (input != "100" && input != "300" && input != "500") {
        cout << "Please enter a valid amount." << endl;
        cin >> input;
    }

    Player player (atoi(input.c_str()));

    int y = atoi(input.c_str());

    return player;
}


Player UpdateBalance(int result, Player player) {
   player.balance += result;

   return player;
   
}