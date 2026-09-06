#include<bits/stdc++.h>
using namespace std;

int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main()
{
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    int result = power(base, exp);
    cout << base << "^" << exp << " = " << result << endl;

    return 0;
}