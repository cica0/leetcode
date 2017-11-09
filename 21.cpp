#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* result = new ListNode(0);
//        if (l1 == NULL && l2 == NULL)
//            return result->next;
//        if (l1 == NULL)
//            result->next = l2;
//        if (l2 == NULL)
//            result->next = l1;
//        ListNode* result_temp = result;
//        while(l1 != NULL && l2 != NULL)
//        {
//            if (l1->val < l2->val)
//            {
//                result->next = l1;
//                l1 = l1->next;
//            }
//            else
//            {
//                result->next = l2;
//                l2 = l2->next;
//            }
//            result = result->next;
//        }    
//        while (l1 != NULL)
//        {
//            result->next = l1;
//            l1 = l1->next;
//            result = result->next;
//        }
//        while (l2 != NULL)
//        {
//            result->next = l2;
//            l2 = l2->next;
//            result = result->next;
//        }
//        result = result_temp->next;
//        free(result_temp);
//        return result;
//    }
//}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        if (l1 == NULL && l2 == NULL)
            return result->next;
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        ListNode* result_temp = result;
        while(l1 != NULL && l2 != NULL)
        {
            while(l1 != NULL && l2 != NULL && l1->val < l2->val)
            {
                l1 = l1->next;
                result = result->next;
            }
            result->next = l2;
            result = result->next;
            if(l1 == NULL || l2 == NULL)
                break;
            while(l1 != NULL && l2 != NULL & l1->val >= l2->val)
            {
                l2 = l2->next;
                result = result->next;
            }
            result->next = l1;
            result = result->next;
            if(l1 == NULL || l2 == NULL)
                break;
        }    
        while (l1 != NULL)
        {
            result->next = l1;
            l1 = l1->next;
            result = result->next;
        }
        while (l2 != NULL)
        {
            result->next = l2;
            l2 = l2->next;
            result = result->next;
        }
        result = result_temp->next;
        free(result_temp);
        return result;
    }
}

int main()
{
    class Solution s;
    ListNode* result = s.mergeTwoLists(ListNode* l1, ListNode* l2); 

    }
