#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(char game_name[],int n)
{   
    int s=0;
    int e=n-1;
    while(s<e)
    {
    swap(game_name[s++],game_name[e--]);
    }
}
int main()
{
char game_name[]="minecraft";
int n= sizeof(game_name);
reverse(game_name,n);
for(int i=0;i<n;i++)
{
    cout<<game_name[i];
}
return 0 ;
}