#include<bits/stdc++.h>
using namespace std;
void printElements(vector<int>&arr, int i)
{
    if (i < arr.size()){
        
    cout << arr[i] << " ";
    printElements(arr, i + 1);
    }
}

int main()
{
    vector<int> arr ;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    cout << "Array elements: ";
    printElements(arr, 0);
   
    return 0;
}