#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int>&A , int low , int high ){
    int i = low;
    int j = high +1; 
    int pivot = A[low];

    do{
        do{
            i++;
        }while(A[i]<pivot);

        do{
            j--;
        }while(A[j]>pivot);

        if(i<j){
            swap(A[i] , A[j]);
        }
    }while(i<j);
    swap(A[low] , A[j]);

    return j;
}

int main(){
     int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int pos = Partition(A, 0, n - 1);

    cout << "Array after one partition step: ";
    for (int x : A) cout << x << " ";
    cout << "\nPivot final position: " << pos << endl;

    return 0;


}