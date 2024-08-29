//Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
#include<bits/stdc++.h>
using namespace std;
bool perfectsquare(int n){
    int lo = 0;
    int hi = n;
    while (lo<=hi)
    {
      long long int mid = (lo+hi)/2;
       if((long long int)mid*mid==n) return true;
       else if((long long int)mid*mid<n) lo=mid+1;
       else hi = mid -1 ; 
    }
    return false ;
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    perfectsquare(n)?cout<<"yes":cout<<"no";
}