#include<bits/stdc++.h>
using namespace std;
int main(){
   cout<<"enter the number : ";
   int n;
   cin>>n;
   cout<<endl;
   bool flag = false;
   int count = 0;
   int arr[]={1,2,3,4,5};
   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
   {
    if(arr[i]>n) {
        count++;
        flag = true;
    }
   }
   if(flag==false) cout << "number of elems are 0";
   else cout<<count;
}