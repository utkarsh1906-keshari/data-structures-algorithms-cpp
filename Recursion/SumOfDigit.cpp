#include<bits/stdc++.h>
using namespace std;

int sod(int n){
    if(n==0)
    return 0;
    else{
        return (n%10) + sod(n/10);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sod(n);
    cout << "Sum of digits of " << n << " is: " << result << endl;

    return 0;
}