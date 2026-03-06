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
    vector<vector<int>> bfs(TreeNode* root){
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* curr=q.front(); q.pop();
                level.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res.push_back(level);
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
    root->left->right = new TreeNode(7);
    root->right->left = new TreeNode(9);

    Solution sol;
    vector<vector<int>> result = sol.bfs(root);

    cout << "BFS: ";
    for(int i = 0; i < result.size(); i++){
    for(int j = 0; j < result[i].size(); j++){
        cout << result[i][j] << " ";
    }
    
    if(i != result.size() - 1)
        cout << ", ";
}

    return 0;
}