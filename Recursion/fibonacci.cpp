// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n==2){
//         return 1;
//     }
//     if(n==1){
//         return 0;
//     }
//     return fib(n-1) + fib(n-2); 
// }
// int main(){
//     int n;
//     cout<<"Enter the number of terms: ";
//     cin>>n;
//     cout<<"Fibonacci Series: ";
//     for(int i=1;i<=n;i++){
//         cout<<fib(i)<<" ";
//     }
//     return 0;
// }




//=============================================================================================
// Best way to write the code is as follows:



// #include<bits/stdc++.h>
// using namespace std;
// vector<long long>dat(50001);
// long long fib(long long n){
//     if(n==2){
//         return 1;
//     }
//     if(n==1){
//         return 0;
//     }
//     // if(dat[n]!=0){
//     //     return dat[n];
//     // }
//     // return dat[n] = fib(n-1) + fib(n-2); 

//     if(dat[n]==0){
//          dat[n] = fib(n-1) + fib(n-2);
//     }
//     return dat[n];
// }


#include<bits/stdc++.h>
using namespace std;

long long fib(long long n , vector<long long>&dat){
    if(n==2){
        return 1;
    }
    if(n==1){
        return 0;
    }

    if(dat[n]==0){
         dat[n] = fib(n-1, dat) + fib(n-2, dat);
    }
    return dat[n];
}
int main(){
    long long n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    vector<long long>dat(n+1, 0);  
    cout<<"Fibonacci Series: "<<endl;
    for(long long i=1;i<=n;i++){
        cout<<fib(i, dat)<<endl;
    }
    return 0;
}