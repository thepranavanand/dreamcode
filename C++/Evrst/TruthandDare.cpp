#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// #include<bits/stdc++.h>

using namespace std;
string a, b;
int main()
{
    srand(time(0));

    const string wordList[10] = {
        "If you could be invisible, what is the first thing you would do ?",
        "What is a secret you kept from your parents ?",
        "What is your worst habit ?",
        "What's the strangest dream you've ever had ?",
        "What's the longest time you've ever gone without showering ?",
        "What is your biggest regret ?"};

    const string Listword[10] = {
        "Dance on a random song choosed by shuffle right now.",
        "Tell one secret to your parents you have been hiding for years.",
        "Call a friend, pretend it's their birthday, and sing them Happy Birthday to You.",
        "Let another person post a status on your behalf.",
        "Eat a bite of a banana peel.",
        "Let the person right next to you do your hairstyle.",
    };

    string word = wordList[rand() % 6];
    string drow = Listword[rand() % 6];

    cout << "Truth or Dare????" << endl;
    cin >> a;

    if (a == "Truth")
    {
        cout << word << endl;
        cin >> b;
        cout << ":)";
    }
    else
    {
        cout << drow << endl;
    }

    return 0;
}