/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        while(curr != nullptr && count < k){
            curr = curr->next; // the idea is to keep the last next value 
            count++;
        }
        if(count == k){
            curr = reverseKGroup(curr, k) ;
            while(count--){
                ListNode* nextNode = head->next;
                head->next = curr;
                curr = head;
                head = nextNode;
            }
            head = curr;
        }

        return head;

    }
};
