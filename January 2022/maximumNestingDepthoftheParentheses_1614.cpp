/*
Justin Halford
21:36 UTC - 6 January 2022

Problem 1614 - Median of Two Sorted Arrays
A string is a valid parentheses string (denoted VPS) if it meets one of the following:

It is an empty string "", or a single character not equal to "(" or ")",
It can be written as AB (A concatenated with B), where A and B are VPS's, or
It can be written as (A), where A is a VPS.
We can similarly define the nesting depth depth(S) of any VPS S as follows:

depth("") = 0
depth(C) = 0, where C is a string with a single character not equal to "(" or ")".
depth(A + B) = max(depth(A), depth(B)), where A and B are VPS's.
depth("(" + A + ")") = 1 + depth(A), where A is a VPS.
For example, "", "()()", and "()(()())" are VPS's (with nesting depths 0, 1, and 2), and ")(" and "(()" are not VPS's.

Given a VPS represented as string s, return the nesting depth of s.

class Solution {
public:
    int maxDepth(string s) {
        int max(0), openIdx(0), closeIdx(0);
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                openIdx++;
            } else if(s[i] == ')'){
                closeIdx++;
            }
            if (openIdx - closeIdx > max)
                max = openIdx - closeIdx;
        }
        return max;
    }
};
*/