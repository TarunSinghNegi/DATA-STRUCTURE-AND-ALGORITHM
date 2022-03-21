//here we have an array so we have to divide in such a way that the painters will paint the wall having area equal to array elements sun so basically we have divide it in such away that the difference between the area of each painter is less//
//YOU CAN'T DO THERE SIMPLE DIVISION AS YOU HAVE TO DIVE AS OF ARRAY//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n ,int m,int mid)
{
    int studentcount=1;
    int arraysum=0;
    for(int i=0;i<n;i++)
    {
        if(arraysum+a[i]<=mid)
        {
            arraysum+=a[i];
        }
        else
        {
            studentcount++;
            if(studentcount>m || arraysum>mid)
            {
                return 0;
            }
            arraysum=a[i];
        }
    }
    return 1;
}
int painterpartion(int a[],int n,int m)
{
    int s=0;
    int e=accumulate(a,a+n,0);
    int mid=s+(e-s)/2;
    int ans =0;
    
    while(s<=e)
    {
        if(binarysearch(a,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
int array[7]={10,20,30,40,50,60,70};
int n= 7;
int m =3;//no of painter you have to divide//
cout<<painterpartion(array,n,m)<<endl;
return 0 ;
}