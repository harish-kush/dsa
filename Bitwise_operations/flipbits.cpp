#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int num){
    string result = "";
    while (num>0)
    {
      if(num%2==0) result+='0';
      else result+='1';
      num/=2;
    }
    return result;
}
int main(){
    // convert all bits to 1
    // XOR the numbers
    cout<<decimal_to_binary(10);
}