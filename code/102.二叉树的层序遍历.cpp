/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
 */
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// @lc code=start
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> res;
        if(root == nullptr)
            return res;
        q.push(root);
        int s = 1;
        while(!q.empty())
        {
            int currentlevel = q.size();
            vector<int> temp;
            for (int i = 0; i < currentlevel; i++)
            {
                root = q.front();
                temp.push_back(root->val);
                q.pop();
                if (root->left != nullptr)
                    q.push(root->left);
                if (root->right != nullptr)
                    q.push(root->right);
            }
            res.push_back(temp);
        }
        return res;
    }
};
// @lc code=end

