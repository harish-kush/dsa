#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(string &binary){
  int result = 0;
  int n = binary.size();
  for (int i = n-1; i >=0; i--)
  {
    char ch = binary[i];
    int num = ch-'0';
    result+=(1<<num*(n-i-1));
  }
  return result;
}
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
    string s = "001011";
    cout<<binary_to_decimal(s)<<endl;
    cout<<decimal_to_binary(13);
}