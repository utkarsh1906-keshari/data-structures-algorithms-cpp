#include <bits/stdc++.h>
using namespace std;

#define stacksize 10

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

// Palindrome Check
// void palindromeCheck(string str)
// {
//     initialize();
//     // Push all characters into stack
//     for (int i = 0; i < str.size(); i++)
//     {
//         Push(str[i]);
//     }

//     // Compare string with stack
//     for (int i = 0; i < str.size(); i++)
//     {
//         char x = str[i];
//         char y = stacktop();

//         if (x == y)
//         {
//             Pop();
//         }
//         else
//         {
//             cout << "Not a Palindrome" << endl;
//             return;
//         }
//     }

//     cout << "Palindrome" << endl;
// }


void palindromeCheck(string str){
    int i = 0;
    while(i<str.size()){
        int x = str[i];
        Push(x);
        i++;

    }

    while(i<str.size()){
        int x = str[i];
        int y = stacktop();
        i++;
        if(x==y){
            Pop();
        }
        else{
          break;
        }
    }

    if(isempty()){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

}

// int main()
// {
//     initialize();

//     string str;

//     cout << "Enter a string: ";
//     cin >> str;

//     palindromeCheck(str);

//     return 0;
// }

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);  // allows spaces

    palindromeCheck(str);

    return 0;
}

