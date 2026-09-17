#include<bits/stdc++.h>
using namespace std;

vector<int> C;

void merge(vector<int>& A, int low, int mid, int high)
{
    C.clear();

    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (A[i] <= A[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(A[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        C.push_back(A[i]);
        i++;
    }

    while (j <= high)
    {
        C.push_back(A[j]);
        j++;
    }

    for (int k = low; k <= high; k++)
    {
        A[k] = C[k - low];
    }
}

void MergeSort(vector<int>& A, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);

        merge(A, low, mid, high);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    MergeSort(A, 0, n - 1);

    cout << "Sorted Array :" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ",";
    }

    return 0;
}