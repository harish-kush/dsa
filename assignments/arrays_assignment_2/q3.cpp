//Check if the given array is sorted or not.
#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int arr[]={54,4,16,26,13,20};
     for (int i = 1; i < 6; i++)
     {
        /* code */
        if(arr[i-1]>arr[i]){
            cout<<"no";
            return 0;
        }
        
     }
     cout << "yes bhaiiii";  
}