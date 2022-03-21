#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binaysearch(vector<vector<int>> a,int target)
{
    int row=a.size();  //FOR FINDING ROW NUMBER //
    int col=a[0].size();  //FOR FINDING COLUMN NUMBER //
    
    int start=0;
    int end  =row*col-1;
    int midindex = start +(end-start)/2;
    while(start<=end)
    {
      int mid=a[midindex/(col)][midindex%(col)];
       if(mid==target)
       {
           return 1;
       }
       if(mid<target)
       {
          start=midindex+1;
       }
       else
       {
           end=midindex-1;
       }
       midindex = start +(end-start)/2;
    }
    
    return 0;

}
int main()
{
vector<vector<int> > arr{{1,2,3},{4,5,6},{7,8,9}};
int target=1;
if(binaysearch(arr,target))
{
    cout<<"founded"<<endl;
}
else
{
    cout<<"not founded"<<endl;
}
return 0 ;
}