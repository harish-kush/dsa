// Print an increasing-decreasing sequence using recursion
#include<bits/stdc++.h>
using namespace std;
void printIncreasing(int current , int n){
      if(current>n) return;
      cout<<current<<" ";
      printIncreasing(current+1,n);
}
void printDecreasing(int current){
    if(current<1) return;
    cout<<current<<" ";
    printDecreasing(current-1);
}
int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    printIncreasing(1,n);
    printDecreasing(n-1);
}