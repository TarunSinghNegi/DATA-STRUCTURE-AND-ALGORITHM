                                                        //FIRST METHOD//   
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char l(char inputstring)
{
    if(inputstring>='a' && inputstring<='z')
    {
        return inputstring;
    }
    else{
        char temp=inputstring-'A'+'a';
        return temp;
    }
}
string removeVowels(string inputString) {
    for(int i=0;i<inputString.length();i++)
    {
        if(l(inputString[i])=='a' || l(inputString[i])=='e' || l(inputString[i])=='i' || l(inputString[i])=='o' || l(inputString[i])=='u')
        {
           inputString.erase(inputString.begin()+i);
           i--;
        }
        
    }
    return inputString;
}
int main()
{
    string inputString="Yoyo";
    removeVowels(inputString);
    cout<<removeVowels(inputString)<<endl;
}
                                                     
                                                     
                                                     
                                                     //ANOTHER GOD METHOD //
// string removeVowels(string inputString) {
//     // Write your code here.
//     string s="";
//     for(int i=0;i<inputString.length();i++){
//         char v=tolower(inputString[i]);
//         if(v!='a' && v!='e' && v!='i' && v!='o' && v!='u'){
//             s+=inputString[i];
//         }
//     }
//     return s;
// }