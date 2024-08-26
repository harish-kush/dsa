// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={3,1,5,2,6,4};
    int n = 6 ;
    for (int i = 0; i < n; i++)
    {
        
        int j=i;
        while (j>=1 && arr[j-1]>arr[j])
        {
          swap(arr[j-1],arr[j]);
          j--;  
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // storing the sorted array into integer
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        x *=10;
        x+=arr[i];
    }
    cout<<x<<endl;
    for (int i = n-1; i>=1; i++)
    {
        if(arr[i-1]!=arr[i]) {
            swap(arr[i-1],arr[i]);
            break;
        }
    }
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        y*=10;
        y+=arr[i];
    }
    cout<<y<<endl;
    cout<<"The sum of two minimum number is : "<<x+y;
}