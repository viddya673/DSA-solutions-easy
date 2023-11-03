#include <iostream>
using namespace std;

void printName(int n){
    if(n==0)
        return;
    
    cout<<"Viddya"<<endl;
    return printName(n-1);
}

void printNums(int i, int n){
    if(n==0)
        return;
    
    cout<<i<<endl;
    return printNums(i+1, n-1);
}

void printNumsRev(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    return printNumsRev(n-1);
}

void printNumsBacktrack(int n){
    if(n==0)
        return;
    printNumsBacktrack(n-1);
    cout<<n<<endl;;
}

void printNumsRevBacktrack(int i, int n){
    if(n==0)
        return;
    
    printNumsRevBacktrack(i+1, n-1);
    cout<<i<<endl;
}

int functionalSummation(int n){
    if(n==1)
        return n;
    return n + functionalSummation(n-1);
}

int parameterizedSummation(int n, int sum){
    if(n==0)
        return sum;
    return parameterizedSummation(n-1, sum+n);
}

int main(){
    // printName(5);
    // printNums(1, 5);
    // printNumsRev(5);
    // printNumsBacktrack(5);
    // printNumsRevBacktrack(1, 5);
    cout<<functionalSummation(5);
    cout<<parameterizedSummation(5, 0);
}