#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> numsWithIndices;
        for (int i = 0; i < nums.size(); i++) {
            numsWithIndices.push_back({nums[i], i});
        }
        
        sort(numsWithIndices.begin(), numsWithIndices.end());
        int left = 0;
        int right = numsWithIndices.size()-1;
        while(left<right){
            int sum = numsWithIndices[left].first + numsWithIndices[right].first;
            if (sum == target){
                return {numsWithIndices[left].second, numsWithIndices[right].second};
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return {};
    }
};

int main(){
    Solution s;
    vector<int> nums{2,7,11,15};
    int target = 9;
    auto result = s.twoSum(nums, target);

    for (int num: result){
        cout<<num<<'\n';
    }

}