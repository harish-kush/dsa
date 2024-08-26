// Sort the array in descending order using Bubble Sort.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,4,3,5,2,6};
    int n = 6;
    for (int i = 0; i < n-1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
       if(flag==true) break;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}