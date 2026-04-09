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
        ListNode* l = new ListNode();
        ListNode* ans = l;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val > list2->val){
                ListNode* t = new ListNode(list2->val);
                l->next = t;
                list2= list2->next;
            }else{
                ListNode* t = new ListNode(list1->val);
                l->next = t;
                list1= list1->next;
            }
            l = l->next;
        }
        while(list1!=nullptr){
            ListNode* t = new ListNode(list1->val);
            l->next = t;
            list1= list1->next;
            l = l->next;
        }
        while(list2!=nullptr){
            ListNode* t = new ListNode(list2->val);
            l->next = t;
            list2= list2->next;
            l = l->next;
        }
        return ans->next;
    }
};
