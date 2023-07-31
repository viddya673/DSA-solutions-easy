#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // int h_len = haystack.length();
        // int n_len = needle.length();
        
        // if (h_len < n_len) return -1;
        // int i=0, k=0;
        // while(i<h_len){
        //     if (needle[k]==haystack[i] && haystack.compare(i, n_len, needle)==0){
        //         return i;
        //     } 
        //     i++;
        // }
        // return -1;
        int n = needle.size();
        for (int i=0; i<haystack.size(); i++){
            int j = 0;
            int k = i;
            while (j<n && needle[j]==haystack[k]){
                j++, k++;
            }
            if(j==n) return i;
        }
        return -1;
    }
};

int main(){
    Solution s;
    string haystack = "butsadsad";
    string needle = "sad";
    
    cout<<s.strStr(haystack, needle);
}