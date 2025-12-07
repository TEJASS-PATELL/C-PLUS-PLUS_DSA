#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {1,-2,3,4,-6,9};

    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        int currsum = 0;
        for(int end=i ; end<n ; end++){
            currsum += arr[end];
            maxSum = max(currsum , maxSum);
        }
    }
   cout<<maxSum;
}