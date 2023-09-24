#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicated(vector<int>& nums) {
        int k = 0; // Initialize the count of elements not equal to val.
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // Move the non-val element to position k.
                k++; // Increment k.
            }
        }
        
        return k; // k represents the number of elements not equal to val.
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
    s.removeDuplicated(arrayOfNums);

    printf("Modified array is \n");
    for (int i = 0; i < 2; i++) {
        printf("%d ", arrayOfNums[i]);
    }

}