#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {  
        
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }

        }
            a[j+1]=temp;//ITS OUTSIDE THE LOOP BECAUSE WE STORED ITS REAL VALUE AND JUST PLACING DIGITS ONE SIDE UP TO ALL THE INDEXES AND LASTLY WHEN WE GET BREAK WE PUT THE VALUE OF TEMP INTTHAT POSITON AND GET OUR ANSWER//
    }
}
int main()
{
int a[4]={4,3,2,1};
int n=4;
sort(a,n);
cout<<"{";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ,";
}
cout<<"}";
return 0 ;
}
