#include<bits/stdc++.h>
using namespace std;
int main(){
  string arr[] = {"harish","bhai","in","manit","ece"};
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; i < n-1-i; i++)
    {
      if(arr[j]>arr[j+1]) {
        swap(arr[j],arr[j+1]);
      }
    }
    
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}