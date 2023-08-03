#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

/*
Program to reverse individual words of a string.
Example-
    Input:
    Output:
*/

int main(){
    string str = "Hello World";
    string result = "";

    istringstream ss(str);
    vector<string> words;

    do{
        string word;
        ss >> word;
        words.push_back(word);
    }while(ss);
    
    for(int i=0; i<words.size(); i++){
        reverse(words[i].begin(), words[i].end());
        result += words[i]+' ';
    }
    cout<<"Result: "<<result<<endl;
}