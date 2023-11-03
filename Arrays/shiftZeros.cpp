#include <bits/stdc++.h> 
using namespace std;

void moveZerosToLeft(int *arr, int n) 
{
    int start = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0 && start<n){
            int j=i-1;
            while(j>=start){
                arr[j+1] = arr[j];
                j--;
            }
            arr[start] = 0;
            start++;
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<endl;
}

int main(){
    int arr[] = {1, 2, 0, 0, 1};
    int n = 5;
    moveZerosToLeft(arr, n);
}
