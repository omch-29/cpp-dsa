#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode* rnn(ListNode* head, int n){
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fast){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
    ListNode* rcn(ListNode* head, int val){
        ListNode* curr=head;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        while(curr){
            if(curr->val == val){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        return dummy->next;
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
    // head = sol.rnn(head, 5);
    head = sol.rcn(head, 3);
    printList(head);
    
}