#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main();
void signup()
{

        string nameUp, passW, answer;
        system("cls");
        cout << "Enter credentials:\n\nCreate username: ";
        cin >> nameUp;
        cout << "Create password: ";
        cin >> passW;
        cout << "\nName your favourite sport (answer in just a word): \n";
        cin.get();
        getline(cin, answer);

        ofstream sup("database.txt", ios::app);
        sup << nameUp << ' ' << passW << ' ' << answer << endl;
        system("cls");
        cout << "____________________________\n";
        cout << "\nREGISTRATION SUCCESSFUL....\n";
        cout << "____________________________\n";
        main();
}
void login()
{
        int count;
        string username, passW, u, p, a;
        system("cls");
        cout << "Please enter your login credentials: " << endl;
        cout << "USERNAME: ";
        cin >> username;
        cout << "PASSWORD: ";
        cin >> passW;

        ifstream sin("database.txt");
        while (sin >> u >> p >> a)
        {
                if (u == username && p == passW)

                {
                        count = 1;
                        system("cls");
                }
        }
        sin.close();
        if (count == 1)
        {
                cout << "\nHello " << username << "...\nYour login was successful...\nWe have created this program for our independent project. \nThanks for using this..\n";
                cin.get();
                cout << "\n1.Login again.\n2.Go to menu.\n"
                     << endl;
                int opt;
                cin >> opt;
                system("cls");
                switch (opt)
                {
                case 1:
                        login();
                        break;
                case 2:
                        main();
                        break;
                default:
                        main();
                        break;
                }
        }
        else
        {
                cout << "\nWhooops!! Wrong credentials..\nPlease check your credentials." << endl;
                cout << "\n1.Login again\n2.Go to main menu\n"
                     << endl;
                int opt;
                cin >> opt;
                system("cls");
                switch (opt)
                {
                case 1:
                        login();
                        break;
                case 2:
                        main();
                        break;
                default:
                        main();
                        break;
                }
        }
}
void forgotcred()
{
        int ch;
        system("cls");
        cout << "Forgotten password? We're here for your help.\n";
        cout << "1.Recover your password by entering username." << endl;
        cout << "2.Recover your username by entering password." << endl;
        cout << "3.Main menu" << endl;
        cout << "\nEnter your choice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
                int count = 0;
                string searchuser, sUser, sPass, sAns, answer;
                cout << "Enter username: ";
                cin >> searchuser;

                ifstream recover("database.txt");
                while (recover >> sUser >> sPass >> sAns)
                {
                        if (sUser == searchuser)
                        {
                                count = 1;
                        }
                }
                recover.close();

                if (count == 1)
                {
                        cout << "Name your favourite sports: ";
                        cin >> answer;

                        ifstream recans("database.txt");
                        while (recans >> sUser >> sPass >> sAns)
                        {
                                if (sAns == answer)
                                {
                                        count = 1;
                                }
                        }
                        recans.close();
                }

                if (count == 2)
                {
                        cout << "\nCongo.. Your account credentials were found in our database.";
                        cout << "\nYour password is " << sPass << "\n";
                        cin.get();
                        cin.get();
                        system("cls");
                        cout << "1.Login\n2.Go to main menu.\n";
                        int opt;
                        cin >> opt;
                        system("cls");
                        switch (opt)
                        {
                        case 1:
                                login();
                                break;
                        case 2:
                                main();
                                break;
                        default:
                                main();
                                break;
                        }
                }
                else if (count == 1)
                {
                        cout << "Wrong answer for the security question. \nPlease try again.";
                        cin.get();
                        cin.get();
                        forgotcred();
                }
                else
                {
                        cout << "\nSorry, Your username is not found in our database\n";
                        cout << "\nPlease recheck your login credentials and try again.\n";
                        cin.get();
                        cin.get();
                        int opt;
                        cout<<"1.Enter credentials again.\n2.Main Menu\n";
                        switch (opt)
                        {
                        case 1:
                                forgotcred();
                                break;
                        case 2:
                                main();
                                break;
                        default:
                                main();
                                break;
                        }
                }
                break;
        }
        case 2:
        {
                int count = 0;
                string searchpass, sUser1, sPass1, sAns1, fun2;
                cout << "\nEnter password: ";
                cin >> searchpass;

                ifstream searchp("database.txt");
                while (searchp >> sUser1 >> sPass1 >> sAns1)
                {
                        if (sPass1 == searchpass)
                        {
                                count = 1;
                        }
                }
                searchp.close();

                if (count == 1)
                {
                        cout << "Name your favourite sports: ";
                        cin >> fun2;

                        ifstream searchA("database.txt");
                        while (searchA >> sUser1 >> sPass1 >> sAns1)
                        {
                                if (sAns1 == fun2)
                                {
                                        count = 2;
                                }
                        }
                        searchA.close();
                }
                if (count == 2)
                {
                        cout << "\nYour password is found in the database.\n";
                        cout << "\nYour username is: " << sUser1 << endl;
                        cin.get();
                        cin.get();
                        system("cls");
                        login();
                }
                else if (count == 1)
                {
                        cout << "Wrong answer for the security question. \nPlease try again.";
                        cin.get();
                        cin.get();
                        forgotcred();
                }
                else
                {
                        cout << "Sorry, Your password was not found in out database. \n";
                        cout << "Kindly recheck your credentials.\n";
                        cin.get();
                        cin.get();
                        forgotcred();
                }

                break;
        }
        case 3:
        {
                cin.get();
                main();
        }
        default:
                cout << "Sorry, You entered wrong choice. Please try again." << endl;
                forgotcred();
        }
}
main()
{
        int choice;
        system("cls");
        cout << "\n_______________________________________________________________________________\n\n";
        cout << "                      Login and Registration System Using C++            \n                         (Designed for Independent Project.)";
        cout << "\n_______________________________________________________________________________\n\n";
        cout << "Main Menu: \n\n";
        cout << "1. SignUp/Register (Press 1 followed by Enter Key to select this)\n";
        cout << "2. SignIn/LogIn (Press 2 followed by Enter Key to select this)\n";
        cout << "3. Recover forgotten Password/UserName (Press 3 followed by Enter Key to select this)\n";
        cout << "4. Press 4 (followed by Enter Key) to EXIT.\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
                signup();
                break;
        case 2:
                login();
                break;
        case 3:
                forgotcred();
                break;
        case 4:
                system("cls");
                cout << "Thanks for using this program.\nThis program is created for Independent Project by: \nPranav (21BCS7719)\nSwastik (21BCS7642)\nAkshat(21BCS7587)\nAnjil (21BCS7371)\nAmarkant (21BCS7631).\n:)\n\n";
                break;
        default:
                system("cls");
                cout << "Wrong Choice Entered\n"
                     << endl;
                main();
        }
}
