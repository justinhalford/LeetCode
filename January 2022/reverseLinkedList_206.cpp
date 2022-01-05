/*
Justin Halford
22:15 UTC - 4 January 2022

Problem 206 - Reverse Linked List
Given the head of a singly linked list, reverse the list, and return the reversed list.

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
    ListNode* reverseList(ListNode* head) {
        //Empty linked list
        if(head == nullptr){
            return nullptr;
        }
        ListNode *prev(nullptr), *curr(head), *ahead(head);
        //Single node linked list
        if(head -> next == nullptr){
            return head;
        }
        //2+ node linked list
        while(curr -> next != nullptr){
            ahead = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = ahead;
        }
        curr -> next = prev;
        
        return curr;
    }
};
*/