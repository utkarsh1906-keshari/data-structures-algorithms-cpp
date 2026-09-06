#include <bits/stdc++.h>
using namespace std;

#define stacksize 100

class Stack {
    int item[stacksize];
    int top;

public:
    Stack() { top = -1; }

    void Push(char x) {
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






bool prcd(char a, char b) {
    // Handle parentheses explicitly
    if(a == '(') return false;   // '(' never pops anything
    if(b == '(') return false;   // always push '('
    if(b == ')') return true;    // pop until '('

    // Exponent '^' is right-associative
    if(a == '^') {
        if(b == '^') return false; // don't pop on equal precedence
        else return true;          // pop if higher precedence
    }

    // Multiplication, division, modulus
    if(a == '*' || a == '/' || a == '%') {
        if(b == '^') return false; // '^' has higher precedence
        else return true;          // pop if equal or lower precedence
    }

    // Addition, subtraction
    if(a == '+' || a == '-') {
        if(b == '+' || b == '-') return true; // equal precedence → pop
        else return false;                    // higher precedence → push
    }

    return false;
}







string InfixToPostfix(string Infix) {
    Stack s;

    string Postfix = "";

    int i = 0;
    while(i < Infix.size()) {

        char symbol = Infix[i];
        i++;

        if(isalnum(symbol)){

            Postfix += symbol;
        }
        else{
            while(!s.isempty() && prcd(s.stacktop(), symbol)){
                Postfix += s.Pop();
            }



            if(symbol!='('){
               s.Push(symbol);
            }
            else{
                s.Pop();
            }




            
        }
    }

        while(!s.isempty()){
            Postfix += s.Pop();

            
        }
    return Postfix;

       
    
   
}


int main(){

    string Infix;
    cout << "Enter Infix Expression: ";
    cin >> Infix;

    string postfix = InfixToPostfix(Infix);
    cout << "Postfix Expression: " << postfix << endl;

    return 0;

}