#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int firstoccur(int arr[], int n, int digit)
{
    int s=0;
    int e=n-1;
    int ans;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==digit)
        {
            ans=mid;
            e=mid-1;
        }
        else{
            
             if(arr[mid]<digit)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    } return ans;
}

int lastoccur(int arr[], int n, int digit)
{
    int s=0;
    int e=n-1;
    int ans;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==digit)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            
             if(arr[mid]<digit)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    } return ans;
}
int main()
{
int arr[]={1,2,45,3,3,3,3,3,3,45,7};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr , arr + n);//this is a sorting built in function//
cout<<"AFTER SORT {";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}cout<<"}";
cout<<endl;
 int findex = firstoccur(arr,n,3);
 int lindex = lastoccur(arr,n,3);
 int no_of_occurence= (lindex-findex)+1;
 cout<<"THE FIRST INDEX OF SEARCHED DIGIT IS "<<findex<<endl;
 cout<<"THE LAST INDEX OF SEARCHED DIGIT IS "<<lindex<<endl;
 cout<<"NUMBER OF OCCURENCE OF DIGIT IS "<<no_of_occurence;
return 0 ;
}