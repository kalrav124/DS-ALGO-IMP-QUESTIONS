//Given a binary tree. Check whether it is a BST or not.

int isBSTUtil(Node*root,int minimum,int maximum){
    if(root==NULL) return true;
    return (root->data>minimum && root->data<maximum 
            && isBSTUtil(root->left,minimum,root->data)
            && isBSTUtil(root->right,root->data,maximum)
           );
}
// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    return isBSTUtil(root,INT_MIN,INT_MAX);
}
