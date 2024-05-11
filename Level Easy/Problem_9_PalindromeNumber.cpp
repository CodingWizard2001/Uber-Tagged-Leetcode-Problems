// Given an integer x, return true if x is a palindrome, and false otherwise.

#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x){
        if(x < 0) return false;
        int temp = x;
        long sum = 0;
        while(temp != 0){
            int digit = (temp % 10);
            sum = sum * 10 + digit;
            temp /= 10;
        }
        return sum == x;
    }
};
int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    Solution solve;
    if(solve.isPalindrome(x)) cout<<x<<" is a palindrome number";
    else cout<<x<<" is not a palindrome number";
}