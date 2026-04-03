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
#include <vector>
#include <queue>

using std::vector;
using std::queue;

class Solution {
private:
    void bfs (TreeNode* node, vector<vector<int>>& res){
        queue<TreeNode*> q;
        q.push(node);

        while(!q.empty()){
            int q_size = q.size();
            vector<int> level_list;

            for(int i = 0; i < q_size; ++i){
                TreeNode* tmp_node = q.front();
                q.pop();
                level_list.push_back(tmp_node->val);

                if(tmp_node->left){
                    q.push(tmp_node->left);
                }
                if(tmp_node->right){
                    q.push(tmp_node->right);
                }
            }
            res.push_back(level_list);
        }

    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if(!root) return res;

        bfs(root, res);
        return res;

    }
};
