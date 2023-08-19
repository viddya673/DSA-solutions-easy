#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int i=len-1;
        int count = 0;

        while(i>=0){
            if(isalnum(s[i])) break;
            i--;
        }

        while(i>=0 && isalnum(s[i])){
            count += 1;
            i--;
        }
        return count;
    }
};

int main(){
    Solution s;
    string str = "   fly me   to   the moon  ";
    cout<<s.lengthOfLastWord(str);
}
