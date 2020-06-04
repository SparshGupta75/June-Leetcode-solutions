class Solution {
public:
    void deleteNode(ListNode* node) 
    {
     *node = *node->next;
    }
};

// Another approach below if we are asked to free the memory allocated to that
// particular node

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode *temp = node->next;
        *node = *temp;
        delete(temp);
        
    }
};
