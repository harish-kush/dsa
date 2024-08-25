// write a program to find 3 largest number of sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int max1 = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];
    for (int i = 0; i < 9; i++)
    {
       if(arr[i]>max1) max1 = arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
       if(arr[i]>max2 && arr[i]<max1) max2 = arr[i];
    }
     for (int i = 0; i < 9; i++)
    {
       if(arr[i]>max3 && arr[i]<max1 && arr[i]<max2) max3 = arr[i];
    }
    cout<<"three largest numbers are : "<<max1<<","<<max2<<","<<max3<<endl;
}