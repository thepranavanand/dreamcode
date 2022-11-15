// implementation of stack (without stl) i.e. #include<stack>

#include<iostream>
using namespace std;

class stack{
    public:
    int top;
    int* arr;
    int size;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if((size-top)>1){
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top>-1){
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    } 

    int peek(){
        if(top>-1){
            return arr[top];
        } else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
 
    bool empty(){
        if(top == -1){
            return true;
        } else {
            return false;
        }
    }
 
};

int main (){
    stack st(5);
    st.push(3);
    st.push(5);
    st.pop();
    cout << st.peek() << endl;
    cout << st.empty();
}