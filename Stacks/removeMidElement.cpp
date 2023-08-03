#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    vector<int> v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    int len = v.size();
    int target = (len%2 == 0) ? len/2 : ceil(len/2);
    
    for(int i=0; i<v.size(); i++){
        if(i==target) continue;
        s.push(v[i]);
    }

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}