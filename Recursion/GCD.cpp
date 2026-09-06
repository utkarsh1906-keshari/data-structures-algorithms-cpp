#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b){
//     if(b==0)
//      return a;
//     if(a==0)
//      return b;

//     if(a>b){
//         return gcd(a%b, b);
//     }
//     else{
//         return gcd(a, b%a);
//     }
// }

// int gcd_iterative(int a, int b){
//     while(b!=0){
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

int gcd(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}