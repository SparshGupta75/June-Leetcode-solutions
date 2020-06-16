
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root==NULL)
        {
            return root;
        }
        while(root && root->val!=val)
        {
            root = root->val>val?root->left:root->right;
        }
        return root;
    }
};

/*
Time and space complexity: O(h) and O(1) respectively
where h is the height of the tree
*/
//Another method

class Solution {
public: 
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr;
        if(root->val == val) return root;
        return root->val > val ? searchBST(root->left, val) : searchBST(root->right, val) ;        
    }
};

/*
Time and space complexity: O(h) and O(h) respectively, if we consider recursion stack
where h is the height of the tree
*/
