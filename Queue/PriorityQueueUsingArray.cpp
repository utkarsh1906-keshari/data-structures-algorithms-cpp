#include <bits/stdc++.h>
using namespace std;

int ArryInsertion(vector<int>arr , int ){


}
 int ArrayDeletion(vector<int>arr , int i){
    int temp = arr[i];
    int N=arr.size();
    for(int j=i+1;j<N;j++){
        arr[j+1]=arr[j];
    }
    arr.pop_back();
    return temp;
 }

 void EnQueue(vector<int>&arr , int data){
    int i = 0;
    int N=arr.size();
    while(i<N && data->arr[i]){
        i++;
    }
    ArrayInsertion(arr[i],);
 }