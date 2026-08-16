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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        ListNode dummy(-100);
        ListNode* ear = &dummy;

        while(curr1 && curr2){
            int l = max(curr1->val,curr2->val);
            cout<<l<<endl;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while(curr1){
            cout<<curr1->val<<endl;
            curr1 = curr1->next;
        }
        return ear;
    }
};
