#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int profit = 0;
        for (int i=1; i<len; i++){
            profit += max(0, prices[i]-prices[i-1]);
        }
        return profit;
    }
};

int main(){
    Solution s;
    vector<int> nums{7,1,5,3,6,4};

    int result = s.maxProfit(nums);
    cout<<result;
}