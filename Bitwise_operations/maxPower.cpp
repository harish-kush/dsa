#include<bits/stdc++.h>
using namespace std;
int setbits(int n){
    int temp = 0;
    while (n>0)
    {
        /* code */
        temp=n; //agr just badi chaiye the use n*2
        n = n & (n-1);
    }
    return count;
}
int main(){
    cout<<setbits(24);
}