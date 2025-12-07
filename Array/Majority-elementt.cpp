#include <vector>
#include<iostream>
#include <unordered_set>

using namespace std;

//! Boyer-Moore Majority Voting Algorithm

vector<int> findMajority(vector<int>& arr) {
    int n = arr.size();
    int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;

    // First pass: Find potential candidates
    for (int num : arr) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Second pass: Verify the candidates
    count1 = count2 = 0;
    for (int num : arr) {
        if (num == candidate1) count1++;
        else if (num == candidate2) count2++;
    }

    vector<int> ans;
    if (count1 > n / 3) ans.push_back(candidate1);
    if (count2 > n / 3) ans.push_back(candidate2);

    return ans;
}

int main(){
    vector<int> ans = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};

    vector<int> Majorityelement = findMajority(ans);

    for(int i=0 ; i<Majorityelement.size(); i++){
        cout<<"Majority element : "<<Majorityelement[i]<<" ";
    }
}
