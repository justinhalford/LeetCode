/*
Justin Halford
19:05 UTC - 2 January 2022

Problem 1 - Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

v2 note: Improvement through the use of an unordered_set structure rather than nested for loops. O(n) runtime.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashTable;
        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            if(hashTable.find(val) != hashTable.end()){
               return {hashTable[val], i};
            } 
            hashTable[nums[i]] = i;
        }
        return {};
    }
};
*/