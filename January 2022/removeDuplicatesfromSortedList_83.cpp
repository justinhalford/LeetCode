/*
Justin Halford
20:00 UTC - 5 January 2022

Problem 83 - Remove Duplicates from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. 
Return the linked list sorted as well.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return head;
        else {
            int prevVal(head -> val), currVal(head -> val);
            ListNode* temp(head), * prev(head);
            while(temp != nullptr){
                if(temp -> val == prev -> val){
                    prev -> next = temp -> next;
                    temp = prev -> next;
                } else {
                    prev = temp;
                    temp = temp -> next;
                }
            }
        }
        return head;
    }
};
*/