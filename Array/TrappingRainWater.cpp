 #include<iostream>
 #include<vector>
#include <climits>
 using namespace std;
 int trappingWater(vector<int> &arr) {
        // code here
        int largest = 0;
        int secondlargest = 0;
        int count;
        int ans = 0;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > arr[largest]){
                secondlargest = largest;
                largest = i;
            }
            else if(arr[i] > arr[secondlargest] && arr[i] < arr[largest]){
                secondlargest = i;
            }
        }
        
        count = largest - secondlargest - 1;
        
        while(count != 0){
            if(arr[count] == 0){
                ans += arr[secondlargest];
                count--;
            }else if(arr[count] < arr[secondlargest]){
                ans += arr[secondlargest] - arr[count];
                count--;
            }
        }
        return ans;
    }

    int main(){

        vector<int> v = {3, 0, 0, 2, 0, 4};

        cout<<trappingWater(v);
    }