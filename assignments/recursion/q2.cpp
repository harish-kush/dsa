// Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion.
#include<bits/stdc++.h>
using namespace std;
int sumOfOdd(int a, int b){
    if(a>b) return 0;
    if (a%2!=0)
    {
        return a+sumOfOdd(a+2,b);
    }
    else {
        a++;
        return a+sumOfOdd(a+2,b);
    }
}
int main(){
    cout<<"Sum of all a and b is : "<<sumOfOdd(2,7);
}