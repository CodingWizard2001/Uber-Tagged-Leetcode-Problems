// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include<iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n){
        int product = 1,sum = 0;
        while(n > 0){
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }
        return product - sum;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Solution solve;
    cout<<"The difference between the product and the sum of its digits are : "<<solve.subtractProductAndSum(n);
}