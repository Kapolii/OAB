#include <iostream>
#include <ctime>
#include "Header.h";

using namespace std;

int main() {
	Player player = CreatePlayer();
	cout << player.balance;
	int result = 0;
	int winnings = 0;
	
	int bet = 0;

	cout << player.balance;

	GetResult();
	result = GetResult();
	winnings = SpinResult(result, bet);
	player = UpdateBalance(result,player);
	bet = EnterBet(player);


	return 0;
}
