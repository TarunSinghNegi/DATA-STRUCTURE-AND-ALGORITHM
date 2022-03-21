#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char lowercase(char word)
{
    if(word>='a' && word<='z')
    {
        return word;
    }
    else{
        char temp=word-'A'+'a';
        return temp;
    }
}


int  ispalindrome(char t[],int n)
{
    int s=0;
    int e=n-2;
    while(s<e)
    {
        if(lowercase(t[s])==lowercase(t[e]))
        {
            s++;
            e--;
        }
        else
        {
           cout<<"not a plaindrome"<<endl;
           return 0;
        }
    }
    cout<<"its a palindrome"<<endl;
}
int main()
{
char word[]="@Noon@";
int n= sizeof(word)/sizeof(word[0]);//it give always onemore digit because it also claculate /n or null character
cout<<n<<endl;
ispalindrome(word,n);
return 0 ;
}