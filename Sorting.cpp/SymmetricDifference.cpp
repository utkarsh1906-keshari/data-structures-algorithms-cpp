#include <bits/stdc++.h>
using namespace std;

vector<int> SymmetricDifference(vector<int>A , vector<int>B){
    vector<int> C;
    int i = 0, j = 0 ;
    while(i < A.size() && j < B.size()){
        if(A[i] < B[j]){
            C.push_back(A[i]);
            i++;
        }
        else if(A[i] > B[j]){
            C.push_back(B[j]);
            j++;
        }
        else {
            
            i++;
            j++;
        }
    }
    while(i < A.size()){
        C.push_back(A[i]);
        i++;
    }
    while(j < B.size()){
        C.push_back(B[j]);
        j++;
    }
    return C;
}

int main(){
    vector<int> A = {1, 3, 5, 7};
    vector<int> B = {1, 4, 6, 8};

    vector<int> C = SymmetricDifference(A, B);

    cout << "Symmetric Difference: ";
    for(int x : C){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
