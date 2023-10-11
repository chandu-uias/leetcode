int height(Node *root){
    if(root==NULL) return 0;
 else
 {   int l=height(root->left);
    int r=height(root->right);
    if(l>r) return l+1;
    else return r+1;
}
}
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL) return true;
    int l=height(root->left);
    int r=height(root->right);
    int k=abs(l-r);
    if(k<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
    else return false;
    }
