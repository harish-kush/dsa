// Check if the given array is almost sorted. (elements are at-most one position away)
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
    int i;
      for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) {
    cout<<"No"<<endl;
    break;
    }
       if(i == n - 1) cout<<"Yes"<<endl;
       return 0;
    
}