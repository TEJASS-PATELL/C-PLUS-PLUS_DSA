#include<iostream>
using namespace std;
int uniqueno(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=size-1;j>=0;j--){
            if(arr[i] == arr[j]){
                return arr[i];
            }
            else{
                return arr[j];
            }
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,1,2,3,4,8};
    int size = 9;
    cout<<"Unique Number is : "<< uniqueno(arr , size);
}