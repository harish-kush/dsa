#include<bits/stdc++.h>
using namespace std;
int setbits(int n){
    int count = 0;
    while (n>0)
    {
        /* code */
        count++;
        n = n & (n-1);
    }
    return count;
}
int main(){
    cout<<setbits(453);
}