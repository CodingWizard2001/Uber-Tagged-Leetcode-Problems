// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums){
        int ans = 0;
        for(const int num : nums){
            ans ^= num;
        }
        return ans;
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution solve;
    cout<<"The single number is : "<<solve.singleNumber(nums);
}