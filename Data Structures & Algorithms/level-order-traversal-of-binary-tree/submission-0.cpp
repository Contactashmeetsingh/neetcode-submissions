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
            answerVec.push_back(root->val);
            answer.push_back(answerVec);
            return answer;
        }
        else{
            queue <int> bfs;
            int levelCounter = 1;
            vector<int> vals;
            bfs.push(root);
            while(!bfs){
                vals.push_back(bfs.pop());
                bfs.push()
                if(val.size()%2==0){

                }
            }
        }
    }
};
