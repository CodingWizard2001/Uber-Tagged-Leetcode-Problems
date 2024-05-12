// You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit. Return the minimum number of boats to carry every given person.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit){
        int ans = 0;
        sort(people.begin(),people.end());
        int left = 0,right = people.size() - 1;
        while(left < right){
            ++ans;
            if(people[left] + people[right] <= limit) ++left;
            --right;
        }
        return ans + (left == right ? 1 : 0);
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>people;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        people.push_back(x);
    }
    int limit;
    cout<<"Enter the limit : ";
    cin>>limit;
    Solution solve;
    cout<<"The minimum number of boats to carry every given person will be : "<<solve.numRescueBoats(people,limit);
}