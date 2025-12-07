#include <iostream>
using namespace std;
#include <vector>
#include<climits>
#include <algorithm> // For sorting
int getMinDiff(int k, vector<int> &arr) {
        // code here
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int ans = arr[n-1] - arr[0];
    
    if(n == 1){
        return 0;
    }
    for(int i=0; i<n-1; i++){
        int mn = min(arr[0] + k, arr[i+1] - k);   // we use i isted of i+1
        int mx = max(arr[n-1] - k, arr[i] + k);
        ans = min(ans , mx-mn);
    }
    return ans;
}
int main() {

    vector<int> arr = {3, 9, 12, 16, 20};
    int k = 3;

    int result = getMinDiff(k, arr);

    cout << "Minimum difference: " << result << endl;

    return 0;
}
