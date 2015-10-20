#include<iostream>
using namespace std;
#include<conio.h>
#include <stdlib.h>     /* srand, rand */

int result(int computer, int choice)
{
    int k = 0;
    if (choice == 1)
    {
        if (computer == 1) { cout << "drawn game" << endl; k =  0; }
        if (computer == 2) { cout << " you win! " << endl; k =  1; }
        if (computer == 3) { cout << "you lose! " << endl; k = -1; }
    }
    if (choice == 2)
    {
        if (computer == 1) { cout << "you lose! " << endl;  k = -1;}
        if (computer == 2) { cout << "drawn game" << endl;  k = 0; }
        if (computer == 3) { cout << " you win! " << endl;  k = 1; }
    }
    if (choice == 3)
    {
        if (computer == 1) { cout << " you win! " << endl; k = 1; }
        if (computer == 2) { cout << "you lose! " << endl; k = -1;}
        if (computer == 3) { cout << "drawn game" << endl; k = 0; }
    }
    return k;
}
int main()
{
    int choice, computer, n, a, b=0, c=0; char s;
m:	cout << "enter How much times you plan to play this game? -";
    cin >> n;
    int i = 0;
    do
    {
        computer = rand() % 3 + 1;
        cout << "[1]-stone" << endl << "[2]-scissors"<< endl << "[3]-paper"<<endl<< "enter your figure number ";
    b:	cin >> choice;
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "you can choose only [1], [2], or [3]" << endl;
            goto b;
        }
        cout << "computer choose  " << computer<<endl;
        a=result(computer, choice);
        if (a > 0) b++;
        if (a < 0) c++;
        if(i+1 < n) cout << "if you want to end game-press 'Esc',else press other button"<<endl;
        s = _getch();
        i++;
    }
    while (s != 27 && i<n);
    cout << "If you want to look general score, please press 's'" << endl;
    cout << "If you want to repeat the game, please press 'r')" << endl;
    s = _getch();
    if (s == 's')
    {
        cout << "you win " << b << " times, computer wins " << c << " times" << endl;
        s = _getch();
    }
    if (s=='r') goto m;
    return 0;
}
