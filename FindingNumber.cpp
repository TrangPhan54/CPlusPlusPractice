#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= target){
                return i;
            }
        } 
        return nums.size();
    }
};

int main(){
    vector <int> arrayOfNums;
    int input;
    for(int i = 0 ; i < 4 ; i++){
        cout << "add number to vector" << endl;
        cin >> input;
        arrayOfNums.push_back(input);
    }
    
    Solution s;

    int result = s.searchInsert(arrayOfNums,3);
    cout << result;

    return 0;
}