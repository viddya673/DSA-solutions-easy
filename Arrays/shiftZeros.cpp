#include <bits/stdc++.h> 
using namespace std;

// void moveZerosToLeft(int *arr, int n) 
// {
//     int start = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==0 && start<n){
//             int j=i-1;
//             while(j>=start){
//                 arr[j+1] = arr[j];
//                 j--;
//             }
//             arr[start] = 0;
//             start++;
//         }
//     }
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<endl;
// }

// int main(){
//     int arr[] = {1, 2, 0, 0, 1};
//     int n = 5;
//     moveZerosToLeft(arr, n);
// }

void moveZerosToLeft(int *arr, int n) 
{
    int countZeros = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZeros++;
        } else if (countZeros > 0) {
            arr[i - countZeros] = arr[i];
            arr[i] = 0;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToLeft(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
