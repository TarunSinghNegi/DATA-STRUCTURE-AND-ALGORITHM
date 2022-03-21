#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string replacespace(string s)
{ 
    string t;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            t.push_back('@');
            t.push_back('4');
            t.push_back('0');
        }
        else{
            t.push_back(s[i]);
        }
    }
    cout<<t<<endl;
    return t;
}
int main()
{
string s="yo yo honey singh";
replacespace(s);
cout<<replacespace<<endl;
}