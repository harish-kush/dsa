// Write a C++ program to find the largest element of a given 2D array of integers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={45,3,34,2,24,5,534,7656,54};
    int max = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 1; j < 3; j++)
        {
            /* code */
            if (a[i][j]>max)
            {
                max = a[i][j];
            }
            else continue;
        }
        
    }
    cout<<"max term is : "<<max;
}