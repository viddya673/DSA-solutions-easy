#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num: nums){
            if (seen[num]>0) 
                return true;
            seen[num]++;
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,2,3,4};

    cout<<s.containsDuplicate(nums);
}