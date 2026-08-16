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
        while(!bfs.empty){
            vals.push_back(bfs.pop());
            bfs.push()
            if(val.size()){
                answer.push_back(vals)
            }
        }
    
    }
};
