/*
Justin Halford
22:46 UTC - 2 January 2022

Problem 3 - Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.

v1 note: Unable to handle 400+ character strings. Needs to be improved upon in next iteration.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //Was unable to handle 400+ character set due to runtime limit
        //if(s.length() > 400){
        //   return 95;
        //}
        
        vector<int> used(95, -1);
        int currLength(0), maxLength(0), farthestIndex(0);
        for(int i = 0; i < s.length(); i++){
            if(used[int(s[i]) - 32] == -1){
                //New character updated with index where seen
                used[int(s[i]) - 32] = i;
                currLength++;
                cout<<"Curr String: "<<s[i]<<' ';
            } else {
                //Set max if applicable
                if(currLength > maxLength)
                    maxLength = currLength;
                //Reset current length
                currLength = 0;
                //Jump back to duplicate letter's first index + 1
                i = used[int(s[i]) - 32];
                //Reset indicies where characters were used
                for(int j = 0; j < 95; j++){
                  used[j] = -1;
                }
                cout<<endl;
            }
        }
        //Set max if applicable
        if(currLength > maxLength)
            maxLength = currLength;
        cout<<endl;
        return maxLength;
    }
};
*/