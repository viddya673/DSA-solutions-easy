#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    void swapChar(char& a, char& b){
        char temp;
        temp = a;
        a = b;
        b = temp;
    }
    void reverseString(vector<char>& s) {
        int len = s.size();
        if (len <= 1) {
            return;
        }
        for(int i=0; i<len/2; i++){
            swapChar(s[i], s[len-i-1]);
        }
    }
};

int main(){
    Solution s;
    vector<char> strs{'h', 'e', 'l', 'l', 'o'};
    
    s.reverseString(strs);
    for(int i=0; i<strs.size(); i++){
        cout<<strs[i]<<",";
    }
}
