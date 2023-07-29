#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        if (len == 1) return nums[0];
        int ans = 0;
        for (int i=0; i<len; i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,2,2,1,4};
    cout<<s.singleNumber(nums);
}