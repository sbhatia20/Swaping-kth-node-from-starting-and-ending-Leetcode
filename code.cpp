class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int i = 1, j = 1;
        
        while (i < k && temp1) {
            temp1 = temp1->next;
            i++;
        }
        
        ListNode* temp = head;
        while (temp->next) {
            if (j >= k) {
                temp2 = temp2->next;
            }
            temp = temp->next;
            j++;
        }
        
        int data = temp1->val;
        temp1->val = temp2->val;
        temp2->val = data;
        
        return head;
    }
};
