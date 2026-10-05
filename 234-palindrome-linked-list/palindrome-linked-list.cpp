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
    bool isPalindrome(ListNode* head) {
        ListNode* fp = head;
        ListNode* sp = head;
        while(fp!=NULL && fp->next!=NULL){
            sp=sp->next;
            fp=fp->next->next;
        }
        ListNode* curr = sp;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        prev=next=NULL;
        while(curr != NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* left = head;
        ListNode* right = prev;
        while(right!=NULL){
            if(left->val != right->val){
                return false;
            }
            left=left->next;
            right=right->next;
        }
        return true;
    }
};