#include <bits/stdc++.h>
using namespace std;

// Definition of Binary Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution{
public:
    vector<int> rightSideView(TreeNode* root){
        vector<int>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* curr=q.front(); q.pop();
                if(i==len-1) res.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return res;
    }
};
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(6);
    root->right->right->right->right = new TreeNode(9);

    Solution sol;
    vector<int> result = sol.rightSideView(root);

    cout << "Right Side View: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}