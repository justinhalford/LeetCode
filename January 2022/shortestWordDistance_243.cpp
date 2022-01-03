/*
Justin Halford
19:05 UTC - 3 January 2022

Problem 243 - Shortest Word Distance
Given an array of strings wordsDict and two different strings that already exist in the array word1 and word2, 
return the shortest distance between these two words in the list.

class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        vector<int> word1s;
        vector<int> word2s;
        for(int i = 0; i < wordsDict.size(); i++){
            if(wordsDict[i] == word1){
                word1s.push_back(i);
            } else if(wordsDict[i] == word2) {
                word2s.push_back(i);
            }
        }
        int minDiff(9999), currDiff(9999);
        int index1(0), index2(0);
        while(index1 < word1s.size() && index2 <word2s.size()){
            currDiff = abs(word1s[index1] - word2s[index2]);
            if(currDiff < minDiff)
                minDiff = currDiff;
            if(word1s[index1] < word2s[index2])
                index1++;
            else{
                index2++;
            }   
        }
        return minDiff;
    }
};
*/