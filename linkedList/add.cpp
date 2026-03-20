#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode* add(ListNode* h1, ListNode* h2){
        ListNode* dummy = new ListNode(0);
        ListNode* res = dummy;
        int carry=0;
        while(h1 || h2 || carry){
            int sum=carry;
            if(h1){
                sum+=h1->val;
                h1=h1->next;
            }
            if(h2){
                sum+=h2->val;
                h2=h2->next;
            }
            res->next = new ListNode(sum%10);
            res=res->next;
            carry=sum/10;
        }
        return dummy->next;
    }
    ListNode* addForward(ListNode* h1, ListNode* h2){
    stack<int>s1,s2;
    while(h1){
        s1.push(h1->val);
        h1=h1->next;
    }
    while(h2){
        s2.push(h2->val);
        h2=h2->next;
    }
    int carry = 0;
    ListNode* head = NULL;
    while(!s1.empty() || !s2.empty() || carry){
        int sum=carry;
        if(!s1.empty()){
            sum+=s1.top();
            s1.pop();
        }
        if(!s2.empty()){
            sum+=s2.top();
            s2.pop();
        }
        ListNode* node = new ListNode(sum%10);
        carry=sum/10;
        node->next = head;
        head=node;
    }
    return head;
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
    Solution sol;
    ListNode* h1 = new ListNode(3);
    h1->next = new ListNode(5);

    ListNode* h2 = new ListNode(7);
    h2->next = new ListNode(2);

    // ListNode* head = sol.add(h1,h2);
    // printList(head);
    ListNode* head = sol.addForward(h1,h2);
    printList(head);

}