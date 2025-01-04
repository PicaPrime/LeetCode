#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSameTree(TreeNode* root, TreeNode * subroot){
        if(root == NULL && subroot == NULL) return true;
        if(subroot == NULL || root == NULL) return false;
        if(root->val == subroot->val){
            return (isSameTree(root->left, subroot->left) && 
                    isSameTree(root->right, subroot->right));
        }
        else return false;
    }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if(subRoot == NULL) return true;
        if(root == NULL) return false;
        if(isSameTree(root, subRoot)) return true;
        else{
            return (isSubtree(root->left, subRoot) ||
                    isSubtree(root->right, subRoot));
        }
    }
};