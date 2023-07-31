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
    Stack s;
    string input = "Reversed";
    string ans = "";
    int n = input.length();
    for(int i=0; i<n; i++){
        s.push(input[i]);
    }
    
    for(int i=0; i<n; i++){
        input[i] = s.pop();
    }
    cout<<input;
    return 0;

}