#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char XO[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int coordX;
    int coordY;
    char currentPlayer = 'O';

    cout << "Welcome to XO game!" << "\n";

    for (int i = 0; i < 9; i++) {
        cout << "Please input coordinates(average from 0 to 2): ";
        cin >> coordX >> coordY;
        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        }
        else {
            currentPlayer = 'X';
        }
        if (coordX < 0 || coordX > 2 || coordY < 0 || coordX > 2) {
            cout << "Invalid coordinates! Try again!" << endl;
            continue;
        }
        XO[coordX][coordY] += currentPlayer;

        for (int i = 0; i < 3; i++) {
            if (XO[i][0] == XO[i][1] && XO[i][1] == XO[i][2] && XO[i][0] != ' ') {
                cout << "Winner is " << currentPlayer << "\n";
                return 0;
            }
        }
        for (int j = 0; j < 3; j++) {
            if (XO[0][j] == XO[1][j] && XO[1][j] == XO[2][j] && XO[0][j] != ' ') {
                cout << "Winner is " << currentPlayer << "\n";
                return 0;
            }
        }
        if (XO[0][0] == XO[1][1] && XO[1][1] == XO[2][2] && XO[0][0] != ' ') {
            cout << "Winner is " << currentPlayer << "\n";
            return 0;
        }
        if (XO[0][2] == XO[1][1] && XO[1][1] == XO[2][0] && XO[0][2] != ' ') {
            cout << "Winner is " << currentPlayer << "\n";
            return 0;
        }


        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << XO[i][j] << " ";
            }
            cout << endl;
        }
    }
    cout << "Its a draw!" << endl;
    return 0;
}
