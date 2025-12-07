#include<iostream>
#include<vector>
using namespace std;
 int missingNumber(int n, vector<int>& arr) {
        int arrsum = 0;
        int sum = (n*(n+1))/2;
        for(int i=0 ;i<n; i++){
             arrsum += arr[i]; 
        }
        return sum-arrsum;
    }
    int main(){
        vector<int> vec = {20,18, 9 ,8 ,5, 15, 14, 1 ,2 ,10, 7 ,3 ,4 ,17 ,11 ,19, 12, 6 ,13};
        int size = vec.size() + 1;
        cout<<missingNumber(size , vec);
    }