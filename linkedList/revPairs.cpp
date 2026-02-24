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
    
}