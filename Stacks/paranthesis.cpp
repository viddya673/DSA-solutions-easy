#include <iostream>
using namespace std;

#define MAX 1000

class Stack{
    private:
        int top;
        int a[MAX];
    
    public: 
        Stack() {
            top = -1;
        }
        char pop();
        bool push(char x);
        bool isEmpty();
        char peek();

};

bool Stack::push(char x){
    if (top >= MAX-1){
        cout<<"Stack overflow\n";
        return false;
    }else{
        a[++top] = x;
        cout<<x<<"pushed\n";
        return true;
    }
}

char Stack::pop(){
    if (top < 0 ){
        cout<<"Stack underflow\n";
        return false;
    }else{
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}

char Stack::peek(){
    return a[top];
}

int main(){
    string input = "[(])";
    int n = input.length();
    Stack s;

    for(int i=0; i<n; i++){
        if(s.isEmpty()){
            s.push(input[i]);
        }
        else if((s.peek()=='(' && input[i]==')') ||
                (s.peek()=='{' && input[i]=='}') ||
                (s.peek()=='[' && input[i]==']')){
                    s.pop();
        }
        else{
            s.push(input[i]);
        }
    }
    if (s.isEmpty()) cout<<"Balanced";
    else cout<<"Not Balanced";

    return 0;
}