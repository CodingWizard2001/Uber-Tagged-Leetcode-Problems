// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums){
        // <---------- First Method ---------->
        int low = 0,mid = 0,high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 2){
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                --high;
            }
            else if(nums[mid] == 0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                ++low;
                ++mid;
            }
            else mid++;
        }
        // <---------- Second Method ---------->
        // int noOne = 0,noZero = 0,noTwo = 0;
        // for(int i  = 0;i < nums.size();i++){
        //     if(nums[i] == 0) ++noZero;
        //     else if(nums[i] == 1) ++noOne;
        //     else ++noTwo;
        // }
        // for(int i = 0;i < nums.size();i++){
        //     if(i < noZero) nums[i] = 0;
        //     else if(i < (noZero + noOne)) nums[i] = 1;
        //     else nums[i] = 2;
        // }
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
    cout<<"Before Sorting : ";
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    Solution solve;
    solve.sortColors(nums);
    cout<<"After Sorting : ";
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}