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
Node*binaryInput(){
    int val;
    cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)
        q.push(root);
    while (!q.empty())
    {
        Node*p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*left,*right;
        if(l==-1)
            left=NULL;
        else
            left=new Node(l);
        if(r==-1)
            right=NULL;
        else 
            right=new Node(r);
        p->left=left;
        p->right=right;
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void printBNode(Node*root){
    queue<Node*>q;
    if(root) q.push(root);
    else {
        cout<<"tree is empty";
        return;
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
int cntBNode(Node*root){
    if(root==NULL)
        return 0;
    int l=cntBNode(root->left);
    int r=cntBNode(root->right);
    return l+r+1;
}
int main (){
    Node*root=binaryInput();
    // printBNode(root);
    int totalNode=cntBNode(root);
    cout<<totalNode;
    return 0;
}