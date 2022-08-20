#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

main()
{
    srand(time(0));
    const string arr[3] = {"rock", "paper", "scissor"};
    string random = arr[rand() % 3];
    string fun;
    cin >> fun;
    if (random == "rock")
    {
        if (fun == "scissor")
        {
            cout << "computer: " << random << endl;
            cout << "You lose" << endl;
            cout << "Enter 1 to exit and 2 to play again\n";
            int a;
            cin >> a;
            if (a == 1)
            {
                exit(a);
            }
            else
            {
                main();
            }
        }
        else if (fun == "paper")
        {
            cout << "computer: " << random << endl;
            cout << "You win" << endl;
            cout << "Enter 1 to exit and 2 to play again\n";
            int a;
            cin >> a;
            if (a == 1)
            {
                exit(a);
            }
            else
            {
                main();
            }
        }
    }
    else if (random == "paper")
    {
        if (fun == "rock")
        {
            cout << "computer: " << random << endl;
            cout << "You lose" << endl;
            cout << "Enter 1 to exit and 2 to play again\n";
            int a;
            cin >> a;
            if (a == 1)
            {
                exit(a);
            }
            else
            {
                main();
            }
        }
        else if (fun == "scissor")
        {
            cout << "computer: " << random << endl;
            cout << "You win" << endl;
            cout << "Enter 1 to exit and 2 to play again\n";
            int a;
            cin >> a;
            if (a == 1)
            {
                exit(a);
            }
            else
            {
                main();
            }
        }
    }
    else if (random == "scissor")
    {
        if (fun == "paper")
        {
            cout << "computer: " << random << endl;
            cout << "You lose" << endl;
            cout << "Enter 1 to exit and 2 to play again\n";
            int a;
            cin >> a;
            if (a == 1)
            {
                exit(a);
            }
            else
            {
                main();
            }
        }
        else if (fun == "rock")
        {
            cout << "computer: " << random << endl;
            cout << "You win" << endl;
            cout << "Enter 1 to exit and 2 to play again\n";
            int a;
            cin >> a;
            if (a == 1)
            {
                exit(a);
            }
            else
            {
                main();
            }
        }
    }
    return 0;
}