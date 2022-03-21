#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char maxoccchar(string s)
{  
    //to find the number of occurence of alpha//
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

    //to find maimumum occured alpha
    int maxi=-1,ans=-1;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
            ans=i;
        }
    }
        cout<<maxi<<endl;
        return ans+'a';
}


int main()
{
string s="ypyo";
maxoccchar(s);
cout<<maxoccchar(s)<<endl;
return 0 ;
}