#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sortarray(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)//cvaues of j 5<n-1-ibe carefull with th em this is the main thing in the question 
        {
           if(a[j]>a[j+1])
           {
               swap(a[j],a[j+1]);
           }

        }
    }
}
int main()
{
    int a[]={1,3,2,8,6,78,0,6,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    sortarray(a,n);
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

return 0 ;
}