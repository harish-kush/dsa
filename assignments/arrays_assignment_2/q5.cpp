// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {1,2,3,4,5,6};
  
   for (int i = 0; i < 6; i++)
   {
   if(arr[i]%2 == 0) arr[i] = arr[i]+10;
   else if(arr[i]%2 != 0) arr[i] = 2*arr[i];
   cout<<arr[i]<<" ";
   }
   return 0;
 
}