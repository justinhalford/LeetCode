/*
Justin Halford
17:02 UTC - 9 January 2022

Problem 234 - Palindrome Linked List
A string is a valid parentheses string (denoted VPS) if it meets one of the following:

Given the head of a singly linked list, return true if it is a palindrome.

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
    bool isPalindrome(ListNode* head) {
        //Check if list is empty
        if(head == nullptr)
            return true;
        //Create temp pointer to preserve head
        ListNode* temp(head);
        //Create integer to store size of list
        int size(0);
        //Get size of list via traversal until nullptr
        while(temp != nullptr){
            size++;
            temp = temp -> next;
        }
        //Check that size is not equal to 1 (instant palindrome case)
        if(size == 1)
            return true;
        //Reset temp value
        temp = head;
        //Traverse to midway point of the list
        for(int i = 0; i < size/2; i++)
            temp = temp -> next;
        //ListNode pointers all initialized to midway point
        ListNode* ahead(temp);
        ListNode* current(temp);
        ListNode* behind(temp);
        bool skip(false);
        //Check to see if second half of list has: A) a size greater than 1
        if(current -> next != nullptr){
            ahead = ahead -> next;
            behind -> next = nullptr;
        } else {
            // b) a size equal to 1
            current -> next = nullptr;
            skip = true;
        }
        //For the second half of a list with size greater than 1, reverse it node by node
        while(ahead != nullptr && !skip){
            current = ahead;
            ahead = ahead -> next;
            current -> next = behind;
            behind = current;
        }
        //Reset head of second list (current) to non-nullptr value (behind ListNode ptr)
        current = behind;
        //Reset head of first list (temp) to head
        temp = head;
        //Until one of the two lists runs out (works for both even or odd length total lists)
        //Compare values and return false if they don't match
        while(current != nullptr && temp != nullptr){
            if(current -> val != temp -> val){
                return false;
            } else {
                current = current -> next;
                temp = temp -> next;
            }
        }
        //If all pairs match, then the list is a palindrome
        return true;
    }
};
*/