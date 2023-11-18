#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int total = pow(2, N);
        vector<int> res;
        for(int num = 0; num<total; num++){
            int sum = 0;
            for(int i=0; i<N; i++){
                if((num & (1 << i)) != 0){
                    sum += arr[i];
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};

int main(){
    vector<int> nums {5, 2, 1};
    Solution s;
    vector<int> res = s.subsetSums(nums, nums.size());
    for(int r: res)
        cout<<r<<endl;
}
