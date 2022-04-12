#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main();
void login()
{
        int count;
        string user, pass, u, p;
        system("cls");
        cout << "Please enter the following details :" << endl;
        cout << "USERNAME : ";
        cin >> user;
        cout << "PASSWORD :";
        cin >> pass;

        ifstream input("database.txt");
        while (input >> u >> p)
        {
                if (u == user && p == pass)

                {
                        count = 1;
                        system("cls");
                }
        }
        input.close();
        if (count == 1)
        {
                cout << "\nHello " << user << "\nLOGIN SUCCESS...\nWe're glad that you're here...\nThanks for logging in..\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout << "\nLOGIN ERROR\nPlease check your username and password";
                main();
        }
}
void registr()
{

        string reguser, regpass, answer, ru, rp;
        system("cls");
        cout << "Enter the username :";
        cin >> reguser;
        cout << "\nEnter the password :";
        cin >> regpass;
        cout << "\nName your favourite sport (Answer in just a word).\n";
        cin.get();
        getline(cin, answer);

        ofstream reg("database.txt", ios::app);
        reg << reguser << ' ' << regpass << ' ' << answer << endl;
        system("cls");
        cout << "____________________________\n";
        cout << "\nREGISTRATION SUCCESSFUL...\n";
        cout << "____________________________\n";
        main();
}

void forgot()
{
        int ch;
        system("cls");
        cout << "Forgotten password? We're here for your help.\n";
        cout << "1.Search your id by username" << endl;
        cout << "2.Search your id by password" << endl;
        cout << "3.Main menu" << endl;
        cout << "Enter your choice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
                int count = 0;
                string searchuser, su, sp, sa, answer;
                cout << "\nEnter username: ";
                cin >> searchuser;

                ifstream searchu("database.txt");
                while (searchu >> su >> sp >> sa)
                {
                        if (su == searchuser)
                        {
                                count = 1;
                        }
                }
                searchu.close();

                if (count == 1)
                {
                        cout << "Name your favourite sports.\n";
                        cin >> answer;

                        ifstream searcha("database.txt");
                        while (searcha >> su >> sp >> sa)
                        {
                                if (sa == answer)
                                {
                                        count = 2;
                                }
                        }
                        searcha.close();
                }

                if (count == 2)
                {
                        cout << "\n\nHurray, account found\n";
                        cout << "\nYour password is " << sp;
                        cin.get();
                        cin.get();
                        system("cls");
                        main();
                }
                else if (count == 1)
                {
                        cout << "Wrong answer for the security question. \nPlease try again.";
                }
                else
                {
                        cout << "\nSorry, Your userID is not found in our database\n";
                        cout << "\nPlease kindly contact your system administrator for more details \n";
                        cin.get();
                        cin.get();
                        main();
                }
                break;
        }
        case 2:
        {
                int count = 0;
                string searchpass, su2, sp2, sa2, fun2;
                cout << "\nEnter the remembered password :";
                cin >> searchpass;

                ifstream searchp("database.txt");
                while (searchp >> su2 >> sp2 >> sa2)
                {
                        if (sp2 == searchpass)
                        {
                                count = 1;
                        }
                }
                searchp.close();

                if (count == 1)
                {
                        cout << "Name your favourite sports.";
                        cin >> fun2;

                        ifstream searchA("database.txt");
                        while (searchA >> su2 >> sp2 >> sa2)
                        {
                                if (sa2 == fun2)
                                {
                                        count = 2;
                                }
                        }
                        searchA.close();
                }
                if (count == 2)
                {
                        cout << "\nYour password is found in the database \n";
                        cout << "\nYour Id is : " << su2 <<endl;
                        cin.get();
                        cin.get();
                        system("cls");
                        main();
                }
                else if (count == 1)
                {
                        cout << "Wrong answer for the security question. \nPlease try again.";
                }
                else
                {
                        cout << "Sorry, Your password was not found in out database. \n";
                        cout << "\nKindly contact your administrator for more information.\n";
                        cin.get();
                        cin.get();
                        main();
                }

                break;
        }

        case 3:
        {
                cin.get();
                main();
        }
        default:
                cout << "Sorry, You entered wrong choice. Kindly try again" << endl;
                forgot();
        }
}
main()
{
        int choice;
        cout << "_______________________________________________________________________________\n\n";
        cout << "                      WELCOME TO LOGIN AND REGISTRATION PAGE            \n";
        cout << "_______________________________________________________________________________  \n\n";
        cout << "MENU BAR :\n\n";
        cout << "1. SignIn/LogIn (Press 1 followed by Enter Key to select this)\n";
        cout << "2. SignUp/Register (Press 2 followed by Enter Key to select this)\n";
        cout << "3. Forgotten Password/UserName (Press 3 followed by Enter Key to select this)\n";
        cout << "4. Press 4 (followed by Enter Key) to EXIT.\n";
        cout << "\nEnter your choice : ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
                login();
                break;
        case 2:
                registr();
                break;
        case 3:
                forgot();
                break;
        case 4:

                cout << "Thanks for using this program\nThis program is created by @thepranavanand\n\n";
                break;
        default:
                system("cls");
                cout << "Wrong Choice Entered\n"
                     << endl;
                main();
        }
}
