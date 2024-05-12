// Given an integer numRows, return the first numRows of Pascal's triangle.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>>v;
        for(int i = 0;i < numRows;i++){
            vector<int>a(i + 1);
            v.push_back(a);
            for(int j =0;j <= i;j++){
                if(j == 0 || j == i) v[i][j] = 1;
                else v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
        return v;
    }
};
int main(){
    int numRows;
    cout<<"Enter the no. of rows : ";
    cin>>numRows;
    Solution solve;
    vector<vector<int>>result = solve.generate(numRows);
    cout<<"For "<<numRows<<"generated pattern : "<<endl;
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}