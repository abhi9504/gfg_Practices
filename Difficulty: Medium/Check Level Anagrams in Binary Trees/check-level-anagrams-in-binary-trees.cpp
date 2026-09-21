/* Structure of binary tree Node
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool areAnagrams(Node* root1, Node* root2) {
        // Abhi Code Karo
        queue<Node*> q1, q2;
        q1.push(root1);
        q2.push(root2);
        
        while(!q1.empty() || !q2.empty()) {
            int n = q1.size();
            int m = q2.size();
            
            if(n != m)  return false;  // size kam h to anagram hoga hi nhhi
            
            // yaha aaya mean nuber of nodes same
            map<int, int> mp;
            
            for(int i=0; i<n; i++) {
                auto fN1 = q1.front();
                auto fN2 = q2.front();
                q1.pop();
                q2.pop();
                
                mp[fN1->data]++;
                mp[fN2->data]--;
                
                if(fN1->left != NULL)  q1.push(fN1->left);
                if(fN1->right != NULL)  q1.push(fN1->right);
                
                if(fN2->left != NULL) q2.push(fN2->left);
                if(fN2->right != NULL)  q2.push(fN2->right);
            }
             for(auto i : mp) {
            if(i.second != 0) return false;
        }
        
    }
        
        return true;
    }
};
