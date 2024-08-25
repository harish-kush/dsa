//Input a string of length n and count all the consonants in the given string.
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "harishkushwahainmanit";
   int count = 0;
   for (int i = 0; i < s.length(); i++)
   {
    if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') count++ ;
    else continue;
   }
   cout<<s.length()-count<< " consonants are there in word "<<s;
}