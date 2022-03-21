#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int merge(int a1[],int n1,int a2[],int n2,int a3[])
{int i=0;
int j=0;
int k=0;
    while(i<n1 && j<n2)
    { 
        
        if(a1[i]>a2[j])
        {
            a3[k++]=a2[j++];
            
        }
        else
        {
            a3[k++]=a1[i++];
            
        }
    }
    while(i<n1)
    {
        a3[k++]=a1[i++];
    }
    while(j<n2)
    {
        a3[k++]=a1[j++];
    }
    
}
int main()
{
int a1[5]={1,2,4,6,7};
int n1=5;
int a2[3]={0,3,5};
int n2=3;
int a3[8];
int n3=8;
merge(a1,n1,a2,n2,a3);
    for (int p = 0; p < n3; p++)
    {
        cout<<a3[p]<<endl;
    }
return 0 ;
}