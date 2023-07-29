#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        vector<int> vect(26, 0);
        for (int i=0; i<s.length(); i++){
            vect[s[i]-'a']++;
            vect[t[i]-'a']--;
        }
        for (int i=0; i<vect.size(); i++){
            if (vect[i]!=0) return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    string s1 = "anagram";
    string s2 = "nagaram";
    
    cout<<s.isAnagram(s1, s2);
}