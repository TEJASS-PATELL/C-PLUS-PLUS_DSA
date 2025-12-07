#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size());
        for(int i=0 ; i<nums.size() ; i++){
            int product = 1;
            for(int j=0 ; j<nums.size() ; j++){
                if(i != j){
                    product *= nums[j];
                }
            }
                ans[i] = product;
        }
        return ans;
    }
int main(){
    vector<int> numss = {1,2,3,4};
    vector<int> result = productExceptSelf(numss);
    for(int i : result){
        cout<<i<<" ";
    }
}