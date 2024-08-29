//Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]= {0,0,0,1,1,1}; // sort the array
    int n = 6;
    int lo = 0;
    int hi = n-1;
    int count = 0;
    while (lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid]<1) lo = mid;
        else if(arr[mid]==1){
            count++;
            lo = mid+1;
        }
    }
     cout<<"Number of 1's are : "<<count;
}