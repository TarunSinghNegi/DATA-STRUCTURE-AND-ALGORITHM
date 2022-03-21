#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 vector<int> waveprint(vector<vector<int>> a,int r,int c)
{
    vector<int> temp;
    for(int col=0;col<c;col++)
    {
      if(col&1)         //c0l&1==odd//
       {
           for(int row=r-1;row>=0;row--)
           {
              temp.push_back(a[row][col]);
              cout<<a[row][col]<<endl;
           }
       } 
       else
       {
           for(int row=0;row<r;row++)
           {
              temp.push_back(a[row][col]);
              cout<<a[row][col]<<endl;
           }
       }
    }
    return temp;
    
}
int main()
{
vector<vector<int> > arr{{1,2,3},{4,5,6},{78,9,40}};
int row=3,col=3;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
waveprint(arr,row,col);




return 0 ;
}