#include<iostream>
#include<vector>
using namespace std;
//     int majorityElement(vector<int> nums){
//         int n = nums.size();
//         for(int val : nums){
//             int frequency = 0;
//             for(int ele : nums){
//                 if(val == ele){
//                     frequency++;
//                 }
//             }
//             if(frequency >= n/2){
//                 return val;
//             }
//         }
// }
int majorityElement(vector<int>& arr) {

        // your code here
        int count = 0;
        int ans = 0;
        for(int i=0; i<arr.size(); i++){
            if(count == 0){
                ans = arr[i];
            }
            if(ans == arr[i]){
                count++;
            }
            else
            count--;
        }
        
        count = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == ans){
                count++;
            }
        }
        
        if(count > arr.size()/2){
            return ans;
        }
        return -1;
    }
int main(){
    vector<int> nums = {1,1,4,2,1,2,2,2};
    cout<<"Majority element is : "<<majorityElement(nums);
}