// Write a program to calculate the reverse of a given positive integer using recursion.
#include<bits/stdc++.h>
using namespace std;
void reverseFunction(int r ,int n){
    if(n==0) {
        cout<<r;
        return ;
    }
    reverseFunction((r*10)+(n%10),n/10);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    reverseFunction(0,n);
}