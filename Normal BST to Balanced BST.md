class Solution{
    
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* solve(vector<int> &v,int l ,int r) {
        if(l==r) return new Node(v[l]);
        while(l<r) {
            int mid = l+(r-l)/2;
            Node* curr=new Node(v[mid]);
            curr->left = solve(v,l,mid-1);
            curr->right = solve(v,mid+1,r);
            return curr;
        }
        return NULL;
    }
    void inorder(Node* root,vector<int> &v) {
        if(!root) return ;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int> v;
    	inorder(root,v);
    	return solve(v,0,v.size()-1);
    }
};
