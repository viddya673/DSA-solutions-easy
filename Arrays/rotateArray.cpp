#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& a, int i, int j){
        while(i<j){
            swap(a[i], a[j]);
            i++, j--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};

int main(){
    Solution s;
    vector<int> nums{1,2,3,4,5,6,7};
    
    s.rotate(nums, 3);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<",";
    }
}
