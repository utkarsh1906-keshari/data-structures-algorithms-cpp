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

void PostFixEvaluation(string Postfix){
    int i=0;
    while(i<Postfix.size()){
        char symbol = Postfix[i];
        i++;
        if(isdigit(symbol)){
            Push(symbol-'0');
        }
        else{
            int b = Pop();
            int a = Pop();
            int value;

            switch (symbol) {
                case '+': value = a + b; break;
                case '-': value = a - b; break;
                case '*': value = a * b; break;
                case '/': value = a / b; break;
                case '^': value = pow(a, b); break;  // power operator
                default:
                    cout << "Unknown operator: " << symbol << endl;
                    exit(1);
            }
            Push(value); 
        }
    }
    int x = stacktop();
    cout << "Result = " << x << endl;


}

int main() {
    string expr;
    cout << "Enter postfix expression (digits only): ";
    cin >> expr;

    PostFixEvaluation(expr);

    return 0;
}