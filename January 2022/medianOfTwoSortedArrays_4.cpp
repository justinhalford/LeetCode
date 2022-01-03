/*
Justin Halford
18:10 UTC - 3 January 2022

Problem 4 - Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

v1 note: Rewrite to run in O(log(m+n)) time and using less memory.

class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<float> merged;
        int index1(0), index2(0), length1(nums1.size()), length2(nums2.size());
        float median;
        //Add the smallest element between lists
        while(index1 < length1 && index2 < length2){
            if(nums1[index1] < nums2[index2]){
                merged.push_back(nums1[index1]);
                index1++;
            } else {
                merged.push_back(nums2[index2]);
                index2++;
            }
        }
        while(index1 < length1){
            merged.push_back(nums1[index1]);
            index1++;
        }
        while(index2 < length2){
            merged.push_back(nums2[index2]);
            index2++;
        }
        for(int i = 0; i < merged.size(); i++){
            std::cout<<merged[i]<<std::endl;
        }
        //Determine median
        if(merged.size() % 2 == 0){
            float val1(merged[merged.size()/2]), val2(merged[(merged.size()/2) - 1]);
            median = (val1 + val2)/2;
        } else {
            median = merged[merged.size()/2];
        }
        return median;
    }
};
*/