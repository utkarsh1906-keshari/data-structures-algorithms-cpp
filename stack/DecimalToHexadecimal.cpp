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

void DecimalToHexadecimal(int D){
    char DAT[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    while(D!=0){
        int r = D%16;
        Push(r);
        D = D/16;
    }
    while(!isempty()){
        int x = Pop();
        cout<<DAT[x]<<" ";
    }
}

int main(){

    initialize();

    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    DecimalToHexadecimal(num);

    return 0;

}