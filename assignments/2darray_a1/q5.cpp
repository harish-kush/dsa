// Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,j;
for(i = 0 ; i < 3 ; i++){
for(int j = 0 ; j < 3 ; j++){
if(i == 3/2 or j == 3/2)cout<<a[i][j]<<" ";
}
}
}