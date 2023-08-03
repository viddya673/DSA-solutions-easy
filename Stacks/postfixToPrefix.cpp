#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char ch){
    switch(ch){
        case '/':
        case '+':
        case '-':
        case '*':
            return true;
    }
    return false;

}

string postToPrefix(string post_exp){
    stack<string> s;
    int len = post_exp.length();

    for(int i=0; i<len; i++){
        if (isOperator(post_exp[i])){
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            string temp = post_exp[i]+op2+op1;
            s.push(temp);
        }else{
            s.push(string(1, post_exp[i]));
        }
    }
    string ans = "";
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main(){
    string postfix = "AB+CD-*";
    cout<<postToPrefix(postfix);
}