#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, sell=0;
        int n = prices.size();
        for(int i=0; i<n; i++){
            buy = min(buy, prices[i]);
            sell = max(sell, prices[i]-buy);
        }
        return sell;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices);
}
