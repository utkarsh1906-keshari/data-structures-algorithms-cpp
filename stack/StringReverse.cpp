#include<bits/stdc++.h>
#define stacksize  10
using namespace std;

struct Stack
{
    char item[stacksize];
    int top;
};

Stack s;

void initialize()
{
    s.top = -1;
}

void Push(char x)
{
    if (s.top == stacksize - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    s.top++;
    s.item[s.top] = x;
}

char Pop()
{
    if (s.top == -1)
    {
        cout << "Stack Underflow" << endl;
        exit(1);
    }

    return s.item[s.top--];
}

char stacktop()
{
    if (s.top == -1)
    {
        cout << "Stack is Empty" << endl;
        exit(1);
    }

    return s.item[s.top];
}

bool isempty()
{
    return (s.top == -1);
}



 


int main() {
    

    return 0;
}