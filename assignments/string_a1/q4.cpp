// Input a string of even length and reverse the second half of the string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abdhfhskfhyw";
    int mid = s.length()/2;
    reverse(s.begin()+mid,s.end());
    cout<<s;
}