#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string removespace(string s)
{ 
    string t;
    int i=0;
    while(i<s.length())
    {
        if(s[i]==' ')
        {
            i++;
        }
        else
        {
            t.push_back(s[i]);
            i++;
        }
    }
    return t;
}
int main()
{
string s="yo yo honey singh";
cout<<removespace(s)<<endl;
}