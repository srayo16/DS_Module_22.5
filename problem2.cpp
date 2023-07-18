// Companies
// Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, hi

#include <bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
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
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int sum = 0;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();

            if (f->val >= low && f->val <= high)
            {
                sum += f->val;
            }

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }

        return sum;
    }
};

int main()
{

    return 0;
}