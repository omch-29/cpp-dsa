#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node(){
        endOfWord=false;
    }
};
class Trie {
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(string key){                        //O(L)
        Node* temp = root;
        for(int i=0;i<key.size();i++){
            if(temp->children.count(key[i])==0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }
};

int main(){
    vector<string> words= {"the", "e", "there", "their", "any", "thee"};
    Trie trie;
}