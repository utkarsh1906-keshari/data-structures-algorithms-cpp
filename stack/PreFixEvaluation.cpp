#include <bits/stdc++.h>
using namespace std;

#define stacksize 100

class Stack {
    int item[stacksize];
    int top;

public:
    Stack() { top = -1; }

    void Push(int x) {
        if (top == stacksize - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        item[++top] = x;
    }

    int Pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
        return item[top--];
    }

    int stacktop() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            exit(1);
        }
        return item[top];
    }

    bool isempty() {
        return (top == -1);
    }
};

void PreFixEvaluation(string Prefix) {
    Stack s;
    int i = Prefix.size() - 1;   // start from rightmost character

    while (i >= 0) {
        char symbol = Prefix[i];

        if (isdigit(symbol)) {
            s.Push(symbol - '0');   // convert char digit to int
        }
        else {
            int a = s.Pop();
            int b = s.Pop();
            int value;

            switch (symbol) {
                case '+': value = a + b; break;
                case '-': value = a - b; break;
                case '*': value = a * b; break;
                case '/': value = a / b; break;
                case '^': value = (int)pow(a, b); break;
                default:
                    cout << "Unknown operator: " << symbol << endl;
                    exit(1);
            }
            s.Push(value);
        }
        i--;   // move left
    }

    cout << "Result = " << s.stacktop() << endl;
}

int main() {
    string expr;
    cout << "Enter prefix expression (digits only): ";
    cin >> expr;

    PreFixEvaluation(expr);

    return 0;
}
