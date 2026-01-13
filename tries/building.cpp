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
    void insert(string key){
        
    }
};

int main(){
    vector<string> words= {"the", "e", "there", "their", "any", "thee"};
    Trie trie;
}