// You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n){
        int prev1 = 1,prev2 = 1;
        if(n < 0) return -1;
        else if(n == 1) return prev1; 
        for(int i = 2;i <= n;i++){
            int temp = prev1 + prev2;
            prev1 = prev2;
            prev2 = temp;
        }
        return prev2;
    }
};
int main(){
    int n;
    cout<<"Enter no. of staircase : ";
    cin>>n;
    Solution solve;
    cout<<"Total no. of distinct ways can climb to the top for "<<n<<" staircase will be : "<<solve.climbStairs(n);
}