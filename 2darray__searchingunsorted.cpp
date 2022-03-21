#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<vector<int>> a,int target)
{ 
    int r=a.size();
    int c=a[0].size();
    int rowindex=0;
    int colindex=c-1;

    while(rowindex<r && colindex>=0)
    {
        int element=a[rowindex][colindex];

        if(element==target)
        {
          return 1;
        }

        else if(element<target)
        {
           rowindex++;
        }
        else{
            colindex--;
        }
    }
    return 0;
}

int main()
{
vector<vector<int>> arr{{1,3,2},{4,5,6},{78,90,400}};
int target=1;
//search(arr,target);
//     //printing the suduko//
// for(int i=0;i<r;i++)
// {
//     for(int j=0;j<c;j++)
//     {
//       cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
//     //ho gya //
// }
if(search(arr,target))
{
    cout<<"mil gya bhai"<<endl;
}
else
{
    cout<<"nahi h bhai"<<endl;
}
return 0 ;
}