#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> seen_chars;
        for (int i=0; i<s.length(); i++){
            seen_chars[s[i]]++;
        }
        for (int i=0; i<s.length(); i++){
            if (seen_chars[s[i]] == 1) return i;
        }
        return -1;
    }
};

int main(){
    Solution s;
    string strs = "loveleetcode";
    
    cout<<s.firstUniqChar(strs);
}