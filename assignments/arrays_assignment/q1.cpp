#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int r = 1;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        r*=arr[i];
    }
    cout<<"Product is : "<<r;
}