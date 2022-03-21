#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> springprint(vector<vector<int>> arr,int r,int c)
{
 vector<int> temp;
 int startingrow=0;
 int startingcol=0;
 int endingrow=r;
 int endingcol=c;
 int count =0;
 int size=r*c;

 while(count<size)
 {
 //for first row//
 for(int index=startingcol; count<size && index<endingcol ;index++)
 {
     temp.push_back(arr[startingrow][index]);
     cout<<arr[startingrow][index]<<endl;
     count++;
 }
 startingrow++;

 //for last coloumn//
for(int index=startingrow; count<size && index<endingrow ;index++)
 {
     temp.push_back(arr[index][endingcol-1]);
     cout<<arr[index][endingcol-1]<<endl;
     count++;
 }
 endingcol--;

 //for last row//
for(int index=endingcol-1; count<size && index>=0 ;index--)
 {
     temp.push_back(arr[endingrow-1][index]);
     cout<<arr[endingrow-1][index]<<endl;
     count++;
 }
 endingrow--;

 //for first coloumn//

 for(int index=endingrow-1; count<size && index>=startingrow ;index--)
 {
     temp.push_back(arr[index][startingcol]);
     cout<<arr[index][startingcol]<<endl;
     count++;
 }
 startingcol++;
 

}
 return temp;
    
}
    
int main()
{

vector<vector<int> >arr{{4827, 32391},{-3902, 292},{17421, -19718},{5447, 14771},{1869, -25667}};
int row=5,col=2;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
springprint(arr,row,col);
return 0 ;
}