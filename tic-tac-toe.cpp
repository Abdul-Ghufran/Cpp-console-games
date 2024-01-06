#include<iostream>
using namespace std;

char tictac[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int col;
char token = 'x';
bool draw = false;
string n1 = "";
string n2 = "";

void printBoard() 
{
    cout << endl;
    cout << "*******************" << endl;
    cout << "*     |     |     *" << endl;
    cout << "*  " << tictac[0][0] << "  " << "|" << "  " << tictac[0][1] << "  " << "|" << "  " << tictac[0][2] << "  *" << endl;
    cout << "*_____|_____|_____*" << endl;
    cout << "*     |     |     *" << endl;
    cout << "*  " << tictac[1][0] << "  " << "|" << "  " << tictac[1][1] << "  " << "|" << "  " << tictac[1][2] << "  *" << endl;
    cout << "*_____|_____|_____*" << endl;
    cout << "*     |     |     *" << endl;
    cout << "*  " << tictac[2][0] << "  " << "|" << "  " << tictac[2][1] << "  " << "|" << "  " << tictac[2][2] << "  *" << endl;
    cout << "*     |     |     *" << endl;
    cout << "*******************" << endl;
    cout << endl;
}

void playerMove() 
{
    int digit;
    
    if (token == 'x') 
    {
        cout << n1 << " PLEASE ENTER YOUR CHOICE :" << endl;
    } 
    
    else if (token == '0') 
    {
        cout << n2 << " PLEASE ENTER YOUR CHOICE :" << endl;
    }
    
    cin >> digit;
    
    if (digit >= 1 && digit <= 9) 
    {
        row = (digit - 1) / 3;
        col = (digit - 1) % 3;
    } 
    
    else 
    {
        cout << "INVALID!!__!!" << endl;
        playerMove();
    }

    if (tictac[row][col] != 'x' && tictac[row][col] != '0') 
    {
        tictac[row][col] = token;
        token = (token == 'x') ? '0' : 'x';
    }
   
    else 
    {
        cout << "OOPS !! NO EMPTY SPACE " << endl;
        playerMove();
    }
}

bool checkWin() 
{
    for (int i = 0; i < 3; i++) 
    {
        if ((tictac[i][0] == tictac[i][1] && tictac[i][0] == tictac[i][2]) || 
            (tictac[0][i] == tictac[1][i] && tictac[0][i] == tictac[2][i])) 
        {
          return true;
        }
    }
    
    if ((tictac[0][0] == tictac[1][1] && tictac[1][1] == tictac[2][2]) || 
        (tictac[0][2] == tictac[1][1] && tictac[1][1] == tictac[2][0])) 
        {
        return true;
        }
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (tictac[i][j] != 'x' && tictac[i][j] != '0') 
            {
                return false;
            }
        }
    }
    
    draw = true;
    return false;
}

int main() 
{
    cout << "Enter the name of the first player " << endl;
    getline(cin, n1);

    cout << "Enter the name of the second player " << endl;
    getline(cin, n2);

    while (!checkWin() && !draw ) 
    {
        printBoard();
        playerMove();
        checkWin();
        printBoard();
    }

    if (token == 'x' && !draw) 
    {
        cout << n2 << " Congratulation! You Won " << endl;
    } 
    
    else if (token == '0' && !draw) 
    {
        cout << n1 << " Congratulation! You Won " << endl;
    }
    
    else 
    {
        cout << "OOPS! MOYE MOYE IT'S A DRAW  " << endl;
    }

    return 0;
}
