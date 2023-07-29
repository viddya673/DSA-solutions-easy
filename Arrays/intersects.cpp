#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1, map2;
        vector<int> arr;
        
        for (int i=0; i<nums1.size(); i++) map1[nums1[i]]++;
        for (int i=0; i<nums2.size(); i++) map2[nums2[i]]++;
    
        for (auto entry: map1){
            int num = entry.first;
            int times = min(map1[num], map2[num]);
            while (times != 0){
                arr.push_back(num);
                times--;
            }
        }
        return arr;
    }
};

int main(){
    Solution s;
    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};
    vector<int> arr = s.intersect(nums1, nums2);
  
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<",";
    }
}