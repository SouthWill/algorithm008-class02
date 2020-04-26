
// Definition for a Node.
/*class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};*/


class Solution {
public:
    vector<int> a;
    vector<int> preorder(Node* root) {
        if (root == NULL) {
            return a;
        }

        a.push_back(root->val);
        
        for (size_t i=0; i< root->children.size();i++) {
            preorder(root->children[i]);
        }

        return a;
    }


};

//递归，对每个节点都先遍历前再遍历后