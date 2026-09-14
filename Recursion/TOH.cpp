#include<bits/stdc++.h>
using namespace std;

int i = 1;

void ToH(int n, char S, char M, char D){
if(n==1){
    cout <<i++ << "-"<< S<<"-->"<<D<<endl;
}
else{
    ToH(n-1, S, D, M);
    cout << i++ << "-"<< S<<"-->"<<D<<endl;
    ToH(n-1, M, S, D);
}
}

int main(){
    int n;
    cin >> n;
    ToH(n, 'S', 'M', 'D');
    return 0;
}