// Write a program to calculate the sum of the digits of a given positive integer using recursion.
#include<bits/stdc++.h>
using namespace std;
int sumOfFunction(int n){
    if(n == 0) return 0;
    return (n%10) + sumOfFunction(n/10);
}
int main(){
      cout<<"Enter a number : ";
      int n;
      cin>>n;
      cout<<endl;
      cout<<sumOfFunction(n);
}