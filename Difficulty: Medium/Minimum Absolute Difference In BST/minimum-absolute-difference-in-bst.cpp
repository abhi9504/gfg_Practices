/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 
*/

class Solution {
  public:
    void solve(Node* root, vector<int>& ans) {
        // Base Case
        if(root == NULL)  return;
        
        // Inorder Traversal
        // LNR
        solve(root->left, ans);
        ans.push_back(root->data);
        solve(root->right, ans);
    }
    int absDiff(Node *root) {
        // Abhi Code Karo
        vector<int> ans;
        
        solve(root, ans);
        
        int mini = INT_MAX;
        for(int i=1; i<ans.size(); i++) {
            int res = ans[i] - ans[i-1];
            mini = min(mini, res);
        }
        return mini;
    }
};