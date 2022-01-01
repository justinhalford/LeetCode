/*
Justin Halford
22:29 UTC - 1 January 2022

Problem 1 - Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; i ++){
            int secondValue = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(secondValue == nums[j]){
                    vector<int> pair = {i, j};
                    return pair;
                }
            }
        }
        vector<int> placeholder = {0, 0};
        return placeholder;
    }
};
*/
