
//  |     
//  |     .     
//  |  ./        
//  |        .
//  |__________________

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[], int n)
{
        int s = 0;
        int e = n;
    while (s < e)
    {
        int mid = s+(e-s)/2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int a[] = {7,9,10,1,2,3};
    int n = sizeof(a) / sizeof(a[0]); // for finding no of elements//
    int pivotindex=pivot(a, n - 1);
    cout<<a[pivotindex];
    return 0;
}