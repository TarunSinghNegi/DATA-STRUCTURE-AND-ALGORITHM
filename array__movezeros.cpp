#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> a={0,10,3,0,4};
int j =0;
for(int i=0;i<a.size();i++)
{
    if(a[i]!=0)
    {
      swap(a[i],a[j]);
      j++;
    }
    
}
  for (int p=0;p<a.size();p++)
  {
      cout<<a[p]<<" ";
  }
return 0 ;
}