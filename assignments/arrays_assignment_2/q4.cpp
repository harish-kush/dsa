//Find the difference between the sum of elements at even indices to the sum of elements at odd incices. 
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {1,2,3,4,5,6};
   int ep = 0;
   int op = 0;
   for (int i = 0; i < 6; i++)
   {
   if(arr[i]%2 == 0) ep+=arr[i];
   else if(arr[i]%2 != 0) op+=arr[i];
   }
   int difference = ep - op ;
   cout<<"difference is : "<<difference;
}