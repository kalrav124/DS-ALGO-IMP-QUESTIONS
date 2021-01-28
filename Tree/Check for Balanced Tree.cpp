// This function should return tree if passed  tree 
// is balanced, else false. 

int calcHeight(Node*root){
    if(root==NULL) return 0;
    return max(calcHeight(root->left),calcHeight(root->right))+1;
}
bool isBalanced(Node *root)
{
    if(root==NULL) return true;
    int lh=calcHeight(root->left);//rh=right height,lh=left height.
    int rh=calcHeight(root->right);
    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}
