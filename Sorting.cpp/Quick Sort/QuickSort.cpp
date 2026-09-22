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

void QuickSort(vector<int>& A, int low, int high) {
    if (low < high) {
        int p = Partition(A, low, high);
        QuickSort(A, low, p - 1);
        QuickSort(A, p + 1, high);
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.push_back(x);  // using push_back
    }

    QuickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}