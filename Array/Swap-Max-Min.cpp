#include<iostream>
using namespace std;
#include <climits>
int swapp(int arr[], int size){
    int min =  INT_MAX;
    int max = INT_MIN;
    int minindex = 0;
    int maxindex = 0;

    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
            minindex = i;
        }
        if(arr[i] > max){
            max = arr[i];
            maxindex = i;
    }
}
swap(arr[minindex],arr[maxindex]);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    swapp(arr , size);
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
}