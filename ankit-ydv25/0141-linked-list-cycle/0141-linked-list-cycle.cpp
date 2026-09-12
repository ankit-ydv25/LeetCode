/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr)
        {
            return false;
        }
        ListNode* dheere = head;
        ListNode* tej = head;
        while(tej!= nullptr && tej->next != nullptr)
        {
            dheere = dheere->next;
            tej = tej->next->next;
            if(dheere == tej)
            {
                return true;
            }
        }
        return false;
    }
};