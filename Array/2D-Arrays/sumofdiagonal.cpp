#include<iostream>
using namespace std;
int diagonalsum(int arr[][3] , int row , int colm){
    int sum = 0;
    // pd : j == i
    // sd : j == n-1-i
    for(int i=0;i<row;i++){
        sum += arr[i][i];
        if(i != row-1-i){
            sum += arr[i][row-i-1];
        }
    }
    return sum;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int colm = 3;
    cout<<"Sum of all diagonal element is : "<<diagonalsum(arr, row, colm);
}