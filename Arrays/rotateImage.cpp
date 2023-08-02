#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Reverse each row to get the rotated matrix
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main(){
    Solution s;
    vector<vector<int>> image{
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16},
    };
    s.rotate(image);

    for (const auto& row : image) {
        for (int element : row) {
            std::cout << element << ",";
        }
        std::cout << endl;
    }

}