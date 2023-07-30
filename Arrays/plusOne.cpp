#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        for(int i=len-1;i>=0; i--){
            if(digits[i] != 9){
                digits[i]++;
                break;
            }
            else{
                digits[i]=0;
            }
        }
        if(digits[0] == 0) digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
    Solution s;
    vector<int> nums = {9};
    vector<int> res = s.plusOne(nums);
    for (int num: nums){
        cout<<num<<endl;
    }
}