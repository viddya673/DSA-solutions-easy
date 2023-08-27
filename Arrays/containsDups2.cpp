#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mapper;
        for(int i=0; i<n; i++){
            if(mapper.count(nums[i])){
                if(abs(i-mapper[nums[i]])<=k) return true;
            }
            mapper[nums[i]] = i;
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,2,3,1};
    cout<<s.containsNearbyDuplicate(nums, 3);
    return 0;
}