//Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={0,0,1,1,1,1,1,1,0,0,0,0};
    int n = 4;
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        int low = 0;
       int high = n;
       int count = 0 ;
       for (int j = 0; j<4; i++)
       {
        while (low<=high)
        {
            int mid = (low+high)/2;
            if(arr[i][mid]<1) low= mid;
            else if(arr[i][mid]==1) {
                count++;
                low = mid+1;
            }
        }
        
       }
       if(count>max) {
        max = i;

       }
    }
    cout<<max;
}