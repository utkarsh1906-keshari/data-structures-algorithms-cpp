#include<bits/stdc++.h>
using namespace std;

vector<int> MergeArray(vector<int>A , vector<int>B){
    vector<int> C;
    int i = 0, j = 0 ;
    while(i < A.size() && j < B.size()){
        if(A[i] == B[j]){
            // C[k] = A[i];
            C.push_back(A[i]);
            i++;
            j++;
            // k++;
        }
        else{
            
            
            j++;
            i++;
            
        }
    }
   
    return C;
}

int main(){
    vector<int> C;
    vector<int> A, B;
    A.push_back(1);
    A.push_back(3); 
    A.push_back(5);
    A.push_back(7);

    B.push_back(1);
    B.push_back(4); 
    B.push_back(6); 
    B.push_back(8);
    
    C = MergeArray(A, B);
    for(int i = 0; i < C.size(); i++){
        cout << C[i] << " ";
    }
    return 0;
}