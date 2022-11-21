#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int qfront;
    int size;
    int rear;

public:
    queue()
    {
        size = 169696;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int element){
        if(rear != size){
            arr[rear] =  element;
            rear++;
        } else {
            cout << "Queue overflow" << endl;
        }

    }

    void dequeue(){
        if(rear==qfront){
            cout << "Prashant uth bsdk" << endl;
        }
        else{
            arr[qfront] = -1;
            qfront++;
            if(rear==qfront){
                rear = 0;
                qfront = 0;
            }
        }
    }

    int front(){
        if(rear== qfront){
            return -1;
        } else {
            return arr[qfront];
        }
    }

    bool empty(){
        if(rear==qfront){
            return true;
        } else{
            return false;
        }
    }

};

int main (){
    queue prs;
    prs.enqueue(6);
    prs.enqueue(9);
    prs.enqueue(3);
    prs.enqueue(1);
    prs.dequeue();
    prs.dequeue();
    cout << prs.front();
    cout << prs.empty();

}











