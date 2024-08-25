// Find the first non-repeating element in the array .
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,2,2,3};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j<5; j++)
        {
            if(arr[i] == arr[j]){
               cout<<"Repeating digit is : "<<arr[i];
               return 0;
            }
        }
    }
}