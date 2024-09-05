// Given an array of integers, sort it in descending order using merge sort algorithm.
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,int low , int mid , int high){
    int i = low;
    int j = mid+1;
    vector<int>b;
    while (i<=mid && j<=high)
    {
        if(a[i]>a[j]) b.push_back(a[i++]);
        else b.push_back(a[j++]);

    }
    while (i<=mid) b.push_back(a[i++]);
    while(j<=high) b.push_back(a[j++]);
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i-low];
    }
    
}
void mergeSort(vector<int>&a, int low , int high){
   if(low>=high) return;
   int mid = (low+high)/2;
   mergeSort(a,low,mid);   // 3 5 
   mergeSort(a,mid+1,high);  // 1 2 4
   merge(a,low,mid,high);
}
int main(){
    int arr[]={3,5,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr, arr + n);  

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
    
    
}