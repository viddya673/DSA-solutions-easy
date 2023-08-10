#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Solution {
public:
    bool isBadVersion(int version);

    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while(left<right){
            int mid = left + (right-left) /2;
            if(isBadVersion(mid)) {
                right = mid;
            }
            else left = mid+1;
        }
        return left;
    }
};

bool Solution::isBadVersion(int version) {
        srand(static_cast<unsigned int>(time(nullptr)));
        int randomNum = rand() % 2;
        return randomNum == 0 ? false : true;
}

int main(){
    Solution s;
    cout<<s.firstBadVersion(5);
}