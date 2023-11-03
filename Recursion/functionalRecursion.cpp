#include <iostream>
#include <vector>
using namespace std;

void reverseArray(int l, int r, vector<int>& array){
    if(l>r)
        return;
    swap(array[l], array[r]);
    return reverseArray(++l, --r, array);
}

void reverseArray2(int i, int n, vector<int>& array){
    if(i>=(n/2))
        return;
    swap(array[i], array[n-i-1]);
    return reverseArray2(i+1, n, array);
}

bool checkPalindrome(int i, int n, string s){
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1])
        return false;
    return checkPalindrome(i+1, n , s);
}

int main(){
    // vector<int> nums{1, 2, 3, 4, 5};
    // reverseArray2(0, nums.size(), nums);
    // for(int n: nums)
    //     cout<<n<<" ";

    string s = "abcdba";
    cout<<checkPalindrome(0, s.length(), s);
}