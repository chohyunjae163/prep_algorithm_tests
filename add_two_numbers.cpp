//https://leetcode.com/problems/add-two-numbers/
//leetcode add two numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* traverse =  new ListNode();
        ListNode* ret = traverse;
        bool bCarry = false;
        while(l1 || l2 || bCarry)
        {
            int sum = bCarry ? 1 : 0;    
            if(l1)
            {
                sum += l1->val;
                 l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            bCarry = sum > 9;
            if(bCarry)
            {
                sum %= 10;
            }
            traverse->val = sum;
            if(l1 || l2 || bCarry)
            {
                traverse->next = new ListNode();
                traverse = traverse->next;
            }

        }
        
        return ret;
    }
};
