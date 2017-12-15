#include <iostream>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode tmp = ListNode(0);
        tmp.next = head;
        ListNode* current = &tmp;
        while(current->next != NULL)
        {
            if (current->next->val == val) {
                current->next = current->next->next;
            }
            else{
                current = current->next;
            }
        }
        return tmp.next;


        
    }
};
int main()
{
    Solution s;
    ListNode ListNodel(1);
    ListNode ListNode1(1);
    ListNode ListNode2(1);
    ListNode ListNode3(1);
    ListNode ListNode4(1);
    ListNode1.next = &ListNode2;
    ListNode2.next = &ListNode3;
    ListNode3.next = &ListNode4;
    ListNode4.next = NULL;
    ListNode *result = s.removeElements(&ListNodel, 1);
    while(result != NULL) {
        cout << result->val << endl;
        result = result->next;
    }
    return 0;
}
