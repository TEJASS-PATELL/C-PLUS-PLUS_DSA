#include<iostream>
#include <algorithm>
using namespace std;
int container(int arr[], int n){
    int maxwater = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            int width = j - i;
            int height = min(arr[i] , arr[j]);
            int area = width * height;
            maxwater = max(maxwater , area);
        }
    }
    return maxwater;
}
int main(){
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Container with most water : "<<container(arr , size);
}