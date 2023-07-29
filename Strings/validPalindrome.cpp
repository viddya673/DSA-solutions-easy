#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {
        int len = s.length();
        if (len == 0 || len == 1) return true;
        
        int start = 0;
        int end = len-1;
        
        while(start<=len){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            else {
                start++, end--;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    string s1 = "A man, a plan, a canal: Panama";
    
    cout<<s.isPalindrome(s1);
}

