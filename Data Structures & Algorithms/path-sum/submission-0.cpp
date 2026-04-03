/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return findLeaf(root, 0, targetSum);         
    }

    bool findLeaf(TreeNode* node, int currSum, int target){
        if(!node) return false;

        currSum += node->val;
        
        //we are in a leaf node
        if(!node->left and !node->right){
            return currSum == target;
        }

        return findLeaf(node->left, currSum, target) || findLeaf(node->right, currSum, target);
    }
};