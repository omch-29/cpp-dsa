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
     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return NULL;
        if(root->val==p->val || root->val==q->val) return root;
        TreeNode* llca=lowestCommonAncestor(root->left,p,q);
        TreeNode* rlca=lowestCommonAncestor(root->right,p,q);
        if(llca && rlca) return root;
        return llca ? llca : rlca;
     }
};
int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

   
    TreeNode* p = root->left;   
    TreeNode* q = root->left->right;  

    Solution obj;
    TreeNode* ans = obj.lowestCommonAncestor(root, p, q);

    if(ans)
        cout << "LCA: " << ans->val << endl;
    else
        cout << "LCA not found";

    return 0;
}