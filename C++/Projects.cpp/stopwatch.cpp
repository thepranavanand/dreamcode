// #include <iostream>
// #include<windows.h>
// using namespace std;
// void DispTime(int hour, int minute, int second)
// {
//     cout << hour << ":";
//     cout << minute << ":";
//     cout << second;
// }

// int main()
// {
//     int hour, minute, second;
//     cin>>hour>>minute>>second;
//     while(true) {
//     Sleep(1);

//     second++;

//     if(second > 59) {
//       minute++;
//       second = 0;
//     } 

//     if(minute > 59) {
//       hour++;
//       second = 0;
//       minute = 0;
//     }

//     DispTime(hour, minute, second);
//     }
//     return 0;
// }

#include <iostream>
#include <windows.h>

using namespace std;

void displayTime(int hours, int minutes, int seconds) {
   cout << hours << ":"
        << minutes << ":"
        << seconds << endl;
}

int main() {
    int hour, min, sec;
    cin>>hour>>min>>sec;

  while(true) {
    Sleep(1);

    sec++;

    if(sec > 59) {
      min++;
      sec = 0;
    } 

    if(min > 59) {
      hour++;
      sec = 0;
      min = 0;
    }

    displayTime(hour, min, sec);
  }
}