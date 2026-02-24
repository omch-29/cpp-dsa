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