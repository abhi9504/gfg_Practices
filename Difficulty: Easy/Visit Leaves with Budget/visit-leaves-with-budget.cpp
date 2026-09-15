/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int getCount(Node *root, int k) {
        // Abhi Code Karo
        vector<int> cost;
        int level = 1;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            
            for(int i=0; i<size; i++) {
                Node* temp = q.front();
                q.pop();
                
                if(temp->left != NULL)  q.push(temp->left);
                if(temp->right != NULL)  q.push(temp->right);
                
                // main logic for leaf Node
                if(temp->left == NULL && temp->right == NULL)  cost.push_back(level);
            }
            level++;
        }
        
        int i = 0;
        int sum = 0;
        while(i < cost.size() && sum + cost[i] <= k) {
            sum += cost[i];
            i++;
        }
        return i;
        
    }
};