#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};
Node* reversePairs(Node* head){
    if(!head || !head->next) return head;
    Node* prev=NULL;
    Node* curr = head;
    head = curr->next;
    while(curr && curr->next){
        Node* next = curr->next;
        Node* nextPair = next->next;
        
        next->next=curr;
        curr->next=nextPair;
        if(prev) prev->next=next;
        
        prev=curr;
        curr=nextPair;
    }
    return head;
}
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original: ";
    printList(head);

    head = reversePairs(head);

    cout << "Pairwise Reversed: ";
    printList(head);
}


//206, 876,83,203,1290