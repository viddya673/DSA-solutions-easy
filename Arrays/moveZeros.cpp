#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, k=-1, n=nums.size();
        while (i<n){
            if(nums[i]!=0){
                k++;
                swap(nums[k], nums[i]);
            }
            i++;
        }
    }
};

int main(){
    Solution s;
    vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);
    for (int num: nums){
        cout<<num<<endl;
    }
}
