#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v,int n ,int c)
{
    int s=c;
    int e=n-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
vector<int> a={3,2,5,1};
int n = a.size();
vector<int> ans=reverse(a,n,2);
for (int i = 0; i < n; i++)
{
    cout<<ans[i]<<" "<<endl;
}

return 0 ;
}