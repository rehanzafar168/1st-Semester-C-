#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
        cout<<"Before playing Rock,Paper,scissors game There are some simple rules:"<<endl;
        cout<<"1: Rock beats scissors"<<endl;
        cout<<"2: scissors beats paper"<<endl;
        cout<<"3: Paper beats Rock"<<endl;
        cout<<"4: If both the player and the computer choose the same item, the is Tie"<<endl;
    char Playagain = 'n';
    while (Playagain == 'n' || Playagain == 'N')
    {
        int userchoice;
        cout << "Rock = 1" << "\n"
             << "Paper = 2" << "\n"
             << "Scissors = 3" << "\n"
             << "Choose one option from above three options (1 to 3):";

        cin >> userchoice;
        srand(time(0));
        int Computerchoice = rand() % 3 + 1;
        cout << "Computer Choice:\n " << Computerchoice << endl;

        if ((userchoice == 1) && (Computerchoice == 2))
        {
            cout << "You Win!";
        }
        else if ((userchoice == 1) && (Computerchoice == 3))
        {
            cout << "You Win!";
        }
        else if ((userchoice == 2) && (Computerchoice == 1))
        {
            cout << "You Win!";
        }
        else if ((userchoice == 2) && (Computerchoice == 3))
        {
            cout << "You loose the game......";
        }
        else if ((userchoice == 3) && (Computerchoice == 1))
        {
            cout << "You loose the game......";
        }
        else if ((userchoice == 3) && (Computerchoice == 2))
        {
            cout << "You Win!";
        }
        else
        {
            cout << "Both the player and the computer have same inputs then the game tie!!";
        }
        cout << "\nIf do You want to play again then press 'N' or 'n'";
        cin >> Playagain;
        continue;
    }
    return 0;
}