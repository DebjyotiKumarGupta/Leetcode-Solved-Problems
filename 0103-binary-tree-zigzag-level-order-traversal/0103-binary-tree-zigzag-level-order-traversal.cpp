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
    vector<vector<int>> level;
    if(root==NULL) return level;
    queue<TreeNode*> q;
    q.push(root);
    bool leftright = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++){
            TreeNode *curr = q.front();
            q.pop();

            int res = leftright?i:(size-i-1);
            ans[res] = curr->val;
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        leftright = !leftright;
        level.push_back(ans);
    }
    return level;
}
};