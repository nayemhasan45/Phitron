#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*right;
        Node*left;
        Node(int val){
            this->val=val;
            this->right=NULL;
            this->left=NULL;
        }
};
Node* binaryInput(){
    int val;
    cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node*p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*newLeft,*newRight;
        if(l==-1) 
            newLeft=NULL;
        else 
            newLeft=new Node(l);
        if(r==-1) 
            newRight=NULL;
        else 
            newRight=new Node(r);

        p->left=newLeft;
        p->right=newRight;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void levelOrder_print(Node*root){
    queue<Node*> q;
    if(root==NULL){
        cout<<"root is empty";
        return;
    }else{
        q.push(root); 
    }
    while (!q.empty())
    {
        Node*f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int main (){
    Node*root=binaryInput();
    levelOrder_print(root);
    return 0;
}