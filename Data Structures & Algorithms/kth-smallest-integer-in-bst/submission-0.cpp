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
    int insertion(TreeNode* root, int& answer, int& k, int& counter) {
        if(!root){
            return 0;
        }
        insertion(root->left,answer, k , counter);
        counter++;
        if(counter == k){
            answer = root->val;
        }
        insertion(root->right,answer, k , counter);

        return answer;;
    }
    int kthSmallest(TreeNode* root, int k) {
        int counter = 0;
        int answer = 0;
        return insertion(root,answer, k ,counter);
        
    }
    
};
