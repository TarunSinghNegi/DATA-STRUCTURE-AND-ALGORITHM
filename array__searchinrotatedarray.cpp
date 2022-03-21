#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int start,int end, int digit)
{
    while(start<end)
    {
        int mid =start+(end-start)/2;
        if(a[mid]<digit)
        {
            start=mid+1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int pivot(int a[],int n)
{
    int s=0;
    int e=n;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    
    return s;
}
int mechanism(int a[],int s ,int e,int pivotindex,int digit)
{   
    if(a[pivotindex]<=digit && a[e]>=digit)
    { 
        int index=binarysearch(a,pivotindex,e,digit);
        return index;
    }
    else{
        
        int index=binarysearch(a,s,pivotindex,digit);
        return index;
    }
    
}
int main()
{
cout<<"HERE WE FIND THE DIGIT INDEX IN AN ROTAED ARRAY MEAMS WHICH IS SORTED BUT ROTATED .WE MAKE IT BY USING TWO CONCEPTS PIVOT AND THEN BINARY SEARCH . OKKAY BY!!!!"<<endl;   
int a[] = {7,9,10,1,2,3};
int digit=7;
int n = sizeof(a)/sizeof(a[0]); // for finding no of elements//
int pivotindex=pivot(a, n - 1);
int digitindex=mechanism(a,0,n-1,pivotindex,digit);
cout<<"FOUNDED"<<endl;
cout<<"Index is "<<digitindex<<" " <<"digit is "<<a[digitindex]<<endl;
return 0 ;
}