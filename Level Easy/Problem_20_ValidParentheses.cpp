// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if: 1. Open brackets must be closed by the same type of brackets. 2. Open brackets must be closed in the correct order. 3. Every close bracket has a corresponding open bracket of the same type.

#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    char pop(stack<char> &stack){
        char ch = stack.top();
        stack.pop();
        return ch;
    }
    bool isValid(string s){
        stack<char>stack;
        for(int i = 0;i < s.length();i++){
            if(s[i] == '(') stack.push(')');
            else if(s[i] == '{') stack.push('}');
            else if(s[i] == '[') stack.push(']');
            else if(stack.empty() || pop(stack) != s[i]) return false;
        }
        return stack.empty();
    }
};
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    Solution solve;
    if(solve.isValid(s)) cout<<"Parentheses are valid";
    else cout<<"Parentheses are not valid";
}