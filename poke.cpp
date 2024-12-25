#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pp = bfs(p);
        vector<int> qq = bfs(q);

        if(pp.size() != qq.size()) return false;

        for(int i = 0; i < pp.size(); i++) {
            if(pp[i] != qq[i]) {
                return false;
            }
        }
        return true;
    }

    vector<int> bfs(TreeNode* start) {
        queue<TreeNode*> q;
        q.push(start);

        vector<int> result;

        while(!q.empty()) {
            TreeNode* u = q.front();
            q.pop();

            if (u) {
                result.push_back(u->val);

                if (u->left != nullptr) {
                    q.push(u->left);
                } else {
                    result.push_back(-1);
                }

                if (u->right != nullptr) {
                    q.push(u->right);
                } else {
                    result.push_back(-1);
                }
            }
        }

        return result;
    }
};

int main() {
    // Create first tree
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Create second tree (identical to first)
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    // Create third tree (different structure or values)
    TreeNode* root3 = new TreeNode(1);
    root3->left = new TreeNode(2);
    root3->right = new TreeNode(4); // Different value here

    Solution solution;
    vector<int> v = solution.bfs(root1);

    for(int i=0 ; i< v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    // Test if root1 and root2 are the same
    cout << "Are root1 and root2 the same? " << (solution.isSameTree(root1, root2) ? "Yes" : "No") << endl;

    // Test if root1 and root3 are the same
    cout << "Are root1 and root3 the same? " << (solution.isSameTree(root1, root3) ? "Yes" : "No") << endl;

    // Clean up memory (to avoid memory leaks)
    delete root1->left;
    delete root1->right;
    delete root1;

    delete root2->left;
    delete root2->right;
    delete root2;

    delete root3->left;
    delete root3->right;
    delete root3;

    return 0;
}
