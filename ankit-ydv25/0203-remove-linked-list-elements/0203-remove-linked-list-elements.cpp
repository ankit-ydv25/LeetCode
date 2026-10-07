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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newnode = head;
        while(head!=nullptr && head->val == val)
        {
            head = head->next;
        }
        while(newnode!=nullptr && newnode->next!=nullptr)
        {
            if(newnode->next->val == val)
            {
                newnode->next = newnode->next->next;
            }
            else
            {
                newnode = newnode->next;
            }
        }
        return head;
    }
};