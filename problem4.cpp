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
    bool findTarget(TreeNode *root, int k)
    {
        queue<TreeNode *> q;
        TreeNode *f = NULL;
        vector<int> v;
        bool flag = false;
        q.push(root);

        while (!q.empty())
        {
            f = q.front();
            q.pop();

            v.push_back(f->val);
            if (v.size() == 3)
            {
                if ((v[0] + v[1] == k) || (v[0] + v[2] == k) || (v[1] + v[2] == k))
                {
                    flag = true;
                    break;
                }

                v.clear();
            }

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }

        return flag;
    }
};

int main()
{

    return 0;
}