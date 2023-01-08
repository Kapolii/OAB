#include <iostream>
#include <ctime>
#include "Header.h";

using namespace std;

int input;
int Bet;

int GenerateRandomNumber(int from, int too)
{
	
	int random = rand() % too + from;

	return random;
}

int GetResult()
{
    char playingField [3][3] = {};
    char rowsAndColumns [6][3] = {};
    
    // {'A','A','A'},    
    // {'B','A','B'},
    // {'C','C','A'},                                  


	for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
        {
            int number = GenerateRandomNumber(1,3);
            if(number == 1)
            {
                playingField[i][j] = 'A';
                rowsAndColumns[i][j] = 'A';
            }
            if(number == 2)
            {
                playingField[i][j] = 'O';
                rowsAndColumns[i][j] = 'O';
            }
            if(number == 3)
            {
                playingField[i][j] = 'X';
                rowsAndColumns[i][j] = 'X';
            }
        }
	}
    //Writes the 3x3 grid.
	for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
        {
            cout << playingField[i][j] << " ";   
        }
        cout << endl;
	}
    //Creates rows out of collumns and adds them to rowsAndColumns.
     for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
        {
            rowsAndColumns[i+3][j] = rowsAndColumns[j][i];   
        }
        cout << endl;
	}
    //Checks for mathing rowws and collumns.
    int counter = 0;
    for(int i = 0; i < 6; i++)
    {
        if(rowsAndColumns[i][0] == rowsAndColumns[i][1] && rowsAndColumns[i][1] == rowsAndColumns[i][2])
        {
            counter ++;
        }
    }
    if(rowsAndColumns[0][0] == rowsAndColumns[1][1] && rowsAndColumns[1][1] == rowsAndColumns[2][2])
        {
            counter ++;
        }
    if(rowsAndColumns[0][2] == rowsAndColumns[1][1] && rowsAndColumns[1][1] == rowsAndColumns[2][0])
        {
            counter ++;
        }
    return counter;
}

int SpinResult(int result, int bet) {
    int winnings = 0;
    switch (result)
    {
            case 0:
            winnings = -bet;
            break;
            case 1:
            winnings = bet*2;
            break;
            case 2:
            winnings = bet*3;
            break;
            case 3:
            winnings = bet*4;
            break;
            case 4:
            winnings = bet*5;
            break;
            case 5:
            winnings = bet*7;
            break;
            case 8:
            winnings = bet*10;
            break;

    }
    return winnings;
}

int EnterBet(Player player) {
    cout << "Please enter your bet." << endl;
    int bet = 0;
    while (true) {
        cin >> bet;
        if (bet <= player.balance && bet > 0)
        {
            break;
        }
            cout << "Please enter an amount that is the same or lower than your deposit and greater than zero." << endl;
       
    }
    return bet;

}


//instansierar en tom 2D array

//rand funktion, plickar ut 9 stycken tal 1-3

//loop där vi tillsätter symboler till tal
//Loop där vi tillsätter alla talen.



