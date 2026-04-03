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
private:
    vector<vector<int>> res;
    std::queue<TreeNode*> queue;

    void bfs (TreeNode* node){
        if(!node) return;

        queue.push(node);

        while(!queue.empty()){
            size_t q_size = queue.size();
            std::vector<int> level_list;

            for(size_t i = 0; i < q_size; ++i){
                TreeNode* tmp_node = queue.front();
                queue.pop();
                level_list.push_back(tmp_node->val);

                if(tmp_node->left){
                    queue.push(tmp_node->left);
                }
                if(tmp_node->right){
                    queue.push(tmp_node->right);
                }
            }

            res.push_back(level_list);
        }

    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return res;

        bfs(root);
        return res;

    }
};
