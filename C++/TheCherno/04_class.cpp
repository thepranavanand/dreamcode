#include<iostream>
#define LOG(x) std::cout<<x<<std::endl;

class Player
{
    public:
    int x, y;
    int speed;
    void Move(int xa, int ya) //don't get confused with these xa and ya here. You can also write num1 and num2 here.
    {
        x += xa * speed;
        y += ya * speed;
    }
};


int main ()
{
    Player one;
    one.x = 5;
    one.y = 9;
    one.speed = 100;
    one.Move(one.x, one.y);
    LOG(one.x);
    LOG(one.y);
    
}