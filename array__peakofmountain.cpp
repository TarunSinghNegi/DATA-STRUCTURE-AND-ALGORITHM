#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int peakindex(int a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(a[mid]<a[mid+1])
            s=mid+1;
        else
        e=mid;
        
    }
    return s;
}
int main(){
int arr[]={1,3,8,10,9,4,0};
int n=sizeof(arr)/sizeof(arr[0]);
int index = peakindex(arr,n); 
cout<<"THE PEAK IS AT THE INDEX "<<index<<" AND THE PEAK VALUE IS "<<arr[index];
return 0 ;
}