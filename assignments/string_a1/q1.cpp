//Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "harishkushwahainmanit";
   for (int i = 0; i < s.length(); i++)
   {
    if(i%2!=0) s[i] = '#';
    else continue;
   }
   cout<<s;
}