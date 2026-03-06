//if level is even, there should be only odd valus and strictly increasing
//if level is odd , there should be only even values and strictly decreasing
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
class Solution{
public:
    bool eot(TreeNode* root){
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            int prev = (level%2==0) ? INT_MIN : INT_MAX;
            for(int i=0;i<len;i++){
                TreeNode* curr = q.front(); q.pop();
                int val=curr->val;
                if(level%2==0){
                    if(val%2==0 || val<=prev) return false;
                    }
                    else{
                        if(val%2==1 || val>=prev) return false;
                    }
                    prev=val;
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
            }
            level++;
        }
        return true;
    }
};

int main(){
    TreeNode* root = new TreeNode(1);

root->left = new TreeNode(10);
root->right = new TreeNode(4);

root->left->left = new TreeNode(3);
// root->left->right = NULL

root->right->left = new TreeNode(7);
root->right->right = new TreeNode(9);

root->left->left->left = new TreeNode(12);
root->left->left->right = new TreeNode(8);

root->right->left->left = new TreeNode(6);
// root->right->left->right = NULL

// root->right->right->left = NULL
root->right->right->right = new TreeNode(2);

    Solution sol;
    cout<<sol.eot(root);
}