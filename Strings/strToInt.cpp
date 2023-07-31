#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        double num = 0;
        int len = s.length(), i=0;
        
        while(s[i] == ' '){
            i++;
        }
        
        bool positive = s[i] == '+';
        bool negative = s[i] == '-';
        positive == true ? i++ : i;
        negative == true ? i++ : i;
        while (i<len && s[i]>='0' && s[i]<='9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        num = negative? -num : num;
        num = (num>INT_MAX)? INT_MAX : num;
        num = (num<INT_MIN)? INT_MIN : num;
        
        return num;
    }
};

int main(){
    Solution s;
    string strs = "   -42 ";
    
    cout<<s.myAtoi(strs);
}