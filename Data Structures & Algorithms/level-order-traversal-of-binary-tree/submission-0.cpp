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
    std::deque<TreeNode*> queue;

    void bfs (TreeNode* node){
        int level = 0;
        if(!node) return;

        queue.push_back(node);
        
        /*
            L0 
                Queue = [ ,  , , 4, 5, 6, 7]
                Size = 2
                val to push:  2 | 3  
                level = 1


        */
        while(!queue.empty()){
            size_t q_size = queue.size();
            std::vector<int> level_list;
            for(size_t i = 0; i < q_size; ++i){
                TreeNode* tmp_node = queue.front();
                queue.pop_front();
                level_list.push_back(tmp_node->val);
                if(tmp_node->left){
                    queue.push_back(tmp_node->left);
                }
                if(tmp_node->right){
                    queue.push_back(tmp_node->right);
                }
            }
            res.push_back(level_list);
            std::cout << "Level: " << level << std::endl;
            for(const auto& inner: res){
                for(int x:inner){
                    std::cout << x << " ";
                }
                std::cout << std::endl;
            }

            level+=1;
        }

    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return res;

        bfs(root);
        return res;

    }
};
