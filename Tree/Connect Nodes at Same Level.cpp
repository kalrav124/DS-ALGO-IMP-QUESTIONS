/*Given a binary tree, connect the nodes that are at same level. You'll be given an addition nextRight pointer for the same.
Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node
*/
void connect(Node *root)
{
  if(root==NULL) return ;
  queue<Node*>q;
  Node*curr;
  q.push(root);
  while(!q.empty()){
      int size=q.size();
      while(size--){
          curr=q.front();
          q.pop();
          if(size==0){
            curr->nextRight=NULL;  
          }
          else{
              curr->nextRight=q.front();
          }
          if(curr->left) q.push(curr->left);
          if(curr->right) q.push(curr->right);
      }
  }
}
