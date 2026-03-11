#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode* rev(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr=next;
        }
        return prev;
    }
    
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    printList(head);
    Solution sol;
    head = sol.rev(head);
    printList(head);
}