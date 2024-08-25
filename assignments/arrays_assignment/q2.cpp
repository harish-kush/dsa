#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
         if(max<arr[i]) max = arr[i];
         else continue; 
    }
    cout<<"max term is "<<max<<endl;
    int smax = arr[0];
     for (int i = 0; i < 5; i++)
    {
         if(smax<arr[i] && arr[i]<max) smax = arr[i];
         else continue; 
    }
    cout<<"second max is "<<smax;
}