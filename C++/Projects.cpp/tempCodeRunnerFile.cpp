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