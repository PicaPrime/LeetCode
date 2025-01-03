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
    TreeNode *invertTree(TreeNode *root)
    {
        if(root == NULL){
            return NULL;
        }
        TreeNode* head = root;
        TreeNode* t = root->right;
        root->right = root->left;
        root->left = t;
        invertTree(root->left);
        invertTree(root->right);
        return head;
    }
};

int main()
{
}