
#include <iostream>
using namespace std;
int main()
{
    char b1 = '1', b2 = '2', b3 = '3', b4 = '4', b5 = '5', b6 = '6', b7 = '7', b8 = '8', b9 = '9';
    char turn = 'X';
    int slot_no;
    cout<<"Wellcome to Tic,Toc,Toe Game!"<<endl;
    cout<<"One player is X and other player is O"<<endl;
    while (true)
    {

        cout << b1 << "   | " << b2 << "  | " << b3 << "\n"
             << "____|____|___" << "\n"
             << b4 << "   | " << b5 << "  | " << b6 << "\n"
             << "____|____|____" << "\n"
             << b7 << "   | " << b8 << "  | " << b9 << endl;
        cout << "Player " << turn << ", enter your slot number (1 to 9):";
        cin >> slot_no;
        if (slot_no == 1 && b1 == '1')
            b1 = turn;
        else if (slot_no == 2 && b2 == '2')
            b2 = turn;
        else if (slot_no == 3 && b3 == '3')
            b3 = turn;
        else if (slot_no == 4 && b4 == '4')
            b4 = turn;
        else if (slot_no == 5 && b5 == '5')
            b5 = turn;
        else if (slot_no == 6 && b6 == '6')
            b6 = turn;
        else if (slot_no == 7 && b7 == '7')
            b7 = turn;
        else if (slot_no == 8 && b8 == '8')
            b8 = turn;
        else if (slot_no == 9 && b9 == '9')
            b9 = turn;
        else
        {
            cout << "Invalid Slot Number!!! Try Again." << endl;
            continue;
        }

        if ((b1 == turn && b2 == turn && b3 == turn) || (b4 == turn && b5 == turn && b6 == turn) || (b7 == turn && b8 == turn && b9 == turn) || (b1 == turn && b4 == turn && b7 == turn) || (b2 == turn && b5 == turn && b8 == turn) || (b3 == turn && b6 == turn && b9 == turn) || (b1 == turn && b5 == turn && b9 == turn) || (b3 == turn && b5 == turn && b7 == turn))
        {
            cout << "Player " << turn << ", Wins!";
            break;
        }
        if (
            b1 != '1' && b2 != '2' && b3 != '3' && b4 != '4' && b5 != '5' && b6 != '6' && b7 != '7' && b8 != '8' && b9 != '9')
        {
            cout << "It's Draw!" << endl;
            break;
        }
        if (turn == 'X')
            turn = 'O';
        else
            turn = 'X';
    }
    return 0;
}