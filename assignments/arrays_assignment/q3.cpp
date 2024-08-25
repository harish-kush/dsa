#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={8834,2543,3123,1234,4325};
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
         if(min>arr[i]) min = arr[i];
         else continue; 
    }
    cout<<"min term is "<<min<<endl;
    
}