#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romToInt;
        romToInt['I'] = 1;
        romToInt['V'] = 5;
        romToInt['X'] = 10;
        romToInt['L'] = 50;
        romToInt['C'] = 100;
        romToInt['D'] = 500;
        romToInt['M'] = 1000;
        int res = 0;

        for(int i=0; i<s.size(); i++){
            if (romToInt[s[i]]<romToInt[s[i+1]]){
                res -= romToInt[s[i]];
            }else{
                res += romToInt[s[i]];
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    string str = "MCMXCIV";
    cout<<s.romanToInt(str);
}