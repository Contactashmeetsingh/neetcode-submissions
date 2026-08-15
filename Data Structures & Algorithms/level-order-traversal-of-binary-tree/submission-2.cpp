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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(!root){
            return {};
        }
        if(!root->left && ! root->right){
            vector<int> answerVec;
            answerVec.push_back(root->val);
            answer.push_back(answerVec);
            return answer;
        }

        queue <TreeNode*> bfs;
        bfs.push(root);

        while(!bfs.empty()){
            vector<int> vals;
            for(int i = bfs.size(); i > 0 ; i--){
                TreeNode* node = bfs.front();
                bfs.pop();

                if(node){
                    vals.push_back(node->val);
                    bfs.push(node->left);
                    bfs.push(node->right);
                }
            }
            if(!vals.empty()){
                answer.push_back(vals);
            }
            
        }
        return answer;
    
    }
};
