// Write a program to print the row number having the maximum sum in a given matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4][4] = {1,2,3,4,5,6,7,8,9,2,4,5,6,8,1,2};
    int index = 0;
    int max_sum = 0;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j<4; j++)
        {
            /* code */
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        int sum=0;
        for (int j = 0; j<4; j++)
        {
            /* code */
            sum+=a[i][j];
            if(sum>max_sum) {
                max_sum=sum;
                index = i;
            };
        }
        
    }
    cout<<"max sum is "<<max_sum<<" and the row number is "<<index+1;
}