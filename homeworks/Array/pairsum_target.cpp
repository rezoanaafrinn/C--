// return pair in sorted array with target sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<int> pairSum(vector<int> nums,int target){
//     vector<int>ans;
//     int n = nums.size();

//     int i = 0, j = n-1;

//     while(i<j){
//         int pairSum = nums[i] + nums[j];
//         if(pairSum > target){
//             j--;
//         }else if(pairSum < target){
//             i++;
//         }else {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums = {3,2,4};
//     int target =6;

//     vector<int> ans = pairSum(nums,target);
//     cout << ans[0] <<"," << ans[1] <<endl;
//     return 0;
// }

vector<int> pairSum(vector<int> nums, int target) {
    vector<pair<int, int>> numWithIndex;
    for(int i = 0; i < nums.size(); i++) {
        numWithIndex.push_back({nums[i], i});
    }

    // Sort by value
    sort(numWithIndex.begin(), numWithIndex.end());

    int i = 0, j = nums.size() - 1;
    while(i < j) {
        int sum = numWithIndex[i].first + numWithIndex[j].first;
        if(sum == target) {
            return {numWithIndex[i].second, numWithIndex[j].second};
        } else if(sum < target) {
            i++;
        } else {
            j--;
        }
    }

    return {}; // return empty vector if not found
}

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> ans = pairSum(nums, target);
    if(!ans.empty())
        cout << ans[0] << "," << ans[1] << endl;
    else
        cout << "No valid pair found" << endl;

    return 0;
}