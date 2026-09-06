#include<bits/stdc++.h>
using namespace std;

int soa(int arr[],int a){
    if(a==-1){
        return 0;
    }
    return arr[a] + soa(arr, a-1);
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = soa(arr, n-1);
    cout << "Sum of the array elements is: " << result << endl;

    return 0;
}