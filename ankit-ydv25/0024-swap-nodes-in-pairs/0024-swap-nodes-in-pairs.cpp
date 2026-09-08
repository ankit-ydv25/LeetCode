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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* temp = head;
        ListNode* newhead=head->next;
        ListNode* prev = nullptr;
        while(temp!=nullptr && temp->next != nullptr)
        {
            ListNode* second = temp->next;
            temp->next = second->next;
            second->next =temp;
            if(prev != nullptr)
            {
                prev->next = second;
            }

            prev = temp;
            temp = temp->next;
        }
    return newhead;
    }
};