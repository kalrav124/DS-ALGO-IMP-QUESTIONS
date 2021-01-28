//Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
//If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.


vector<int> verticalOrder(Node *root)
{   
    vector<int>ans;
    map<int,vector<int>>m;
    if(root==NULL) return ans;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();
        if(temp.first->left){
            q.push({temp.first->left,temp.second-1});
        }
        if(temp.first->right){
            q.push({temp.first->right,temp.second+1});
        }
        m[temp.second].push_back(temp.first->data);
    }
    for(auto itr=m.begin();itr!=m.end();itr++){
        for(int i=0;i<itr->second.size();i++){
           ans.push_back(itr->second[i]);
        }
    }
    return ans;
}
