#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int len = nums.size();
        if (len == 0){
            return 0;
        }
        for(int i=1; i<len; i++){
            if (nums[i] != nums[i-1]){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};


int main(){
    Solution s;
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};

    int size = s.removeDuplicates(nums);
    for(int i=0; i<size; i++){
        cout<<nums[i]<<",";
    }
}