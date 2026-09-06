#include<bits/stdc++.h>
#define stacksize 10
using namespace std;

struct Stack
{
    char item[stacksize];
    int top;
};

Stack s;

// Initialize Stack
void initialize()
{
    s.top = -1;
}

// Push Operation
void Push(char x)
{
    if (s.top == stacksize - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    s.item[++s.top] = x;
}

// Pop Operation
char Pop()
{
    if (s.top == -1)
    {
        cout << "Stack Underflow" << endl;
        exit(1);
    }

    return s.item[s.top--];
}

// Top Element
char stacktop()
{
    if (s.top == -1)
    {
        cout << "Stack is Empty" << endl;
        exit(1);
    }

    return s.item[s.top];
}

// Check Empty
bool isempty()
{
    return (s.top == -1);
}

  void DecimalToBinary(int D){

    while(D!=0){
        int r = D%2;

        Push(r);
        D=D/2;
    }

    while(!isempty()){
        int x=Pop();

        cout<<x<<" ";

    }

  }


int main() {
    initialize();   

    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    DecimalToBinary(num);

    return 0;
}
