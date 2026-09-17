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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr){ 
            return result; 
        } 
        queue<TreeNode*> queue1; 
        queue1.push(root); 
        bool order = true; 
        while(!queue1.empty()){ 
            int size = queue1.size(); 
            vector<int> row(size); 
            for(int i = 0; i < size; i++){ 
                TreeNode* node = queue1.front(); 
                queue1.pop(); 
                int index = order? i : size - 1 - i; 
                row[index] = node -> val; 
                if(node -> left){ 
                    queue1.push(node -> left); 

                }
                if(node -> right){ 
                    queue1.push(node -> right); 

                }
            }
            order = !order; 
            result.push_back(row); 
        }
        return result; 
        
    }
};