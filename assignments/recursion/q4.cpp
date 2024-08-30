// Given a positive integer, return true if it is a power of 2 using recursion.
#include<bits/stdc++.h>
using namespace std;

  int countways(int n) {
if (n == 0) {
return 1; 
}

if (n < 0) {
return 0; 
}

return countways(n - 1) + countways(n - 2) + countways(n - 3);
  }

int main(){
    int n;
    cout<<"Enter the number of stairs : ";
    cin>>n;
    int ways = countways(n);
    cout<<ways;
}