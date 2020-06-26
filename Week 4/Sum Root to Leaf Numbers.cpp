
class Solution {
public:
    int sumNumbers(TreeNode *root) {
        
       return  sumNumberUtil(root,0);
        
    }
   
    int sumNumberUtil(struct TreeNode* node, int val)
    {
        if(node==NULL)
            return 0;
        
        val= val*10+node->val;
        if(node->left==NULL && node->right==NULL)
        {
            return val;
        }
        
        return sumNumberUtil(node->left,val)+sumNumberUtil(node->right, val);
    }
};
