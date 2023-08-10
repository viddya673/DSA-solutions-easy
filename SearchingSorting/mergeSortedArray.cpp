#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        /* Solution - 1 */
        // int i = m-1;
        // int j = n-1;
        // int k = m+n-1;
        // while(j>=0){
        //     if(i>=0 && nums1[i]>nums2[j]){
        //          nums1[k--] = nums1[i--];
        //     }else{
        //         nums1[k--] = nums2[j--];
        //     }
        // }

        /* Solution - 2 */
        for(int i=m, j=0; j<n; j++){
            nums1[i++] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};


int main(){
    Solution s;
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};

    s.merge(nums1, 3, nums2, 3);
    for(int num : nums1){
        cout<<num<<endl;
    }
}