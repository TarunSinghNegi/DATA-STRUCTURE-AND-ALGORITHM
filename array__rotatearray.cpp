#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> a={1,2,3,4,5};
vector<int> t(5);
int k=2;
int n=5;
for(int i=0;i<n;i++)
{
  t[(i+k)%n]=a[i];
}
a=t;
for(int j=0;j<n;j++)
{
    cout<<a[j]<<" ";
}
return 0 ;
}


