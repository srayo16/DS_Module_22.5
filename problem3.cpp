// You are given the root of a binary search tree (BST) and an integer val.

// Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
    TreeNode *searchBST(TreeNode *root, int val)
    {
        queue<TreeNode *> q;
        TreeNode *f = NULL;
        q.push(root);

        while (!q.empty())
        {
            f = q.front();

            if (f->val == val)
            {
                break;
            }
            q.pop();

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);

            f = NULL;
        }

        return f;
    }
};

int main()
{

    return 0;
}