#include<bits/stdc++.h>
using namespace std;
bool check (string &str){
    int i = 0 , j = str.length()-1;
    while (i<j)
      {
        if (str[i]!=str[j])
        return false ;
        i++,
        j--;

      }
        
    }
     

int main(){
    // cout<<"enter the number of characters : ";
    // int n;
    // cin>>n;
    // cout<<endl;
    cout<<"enter the string : ";
    string s;
    cin>>s;
    cout<<endl;
    cout<<(check(s)?"yes":"no");
}