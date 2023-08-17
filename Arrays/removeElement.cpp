#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int ind = s.removeElement(nums, val);

    for(int i=0; i<ind; i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
