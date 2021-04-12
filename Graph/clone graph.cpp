
class Solution {
public:
    
    
    Node *cloneg(Node *node,map<int,Node*> &mp)
    {
        if (mp.find(node->val) != mp.end())
            return mp[node->val];
        
        Node *copy = new Node(node->val);
        
        mp[node->val] = copy;
        for (int i=0;i < node->neighbors.size();i++)
        {
            Node *nb = node->neighbors[i];
            copy->neighbors.push_back(cloneg(nb,mp));
        }
        return copy;
    }
    
    Node* cloneGraph(Node* node) {
        
        if (node == NULL)
            return NULL;
        
        map<int,Node*> mp;
        return cloneg(node,mp);
    }
    
};
