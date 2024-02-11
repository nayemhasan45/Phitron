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
Node* takeInput(){
    int val;
    cin>>val;
    Node*root;
    if(val==-1){
        root=NULL;
    }else{
        root=new Node(val);
    }
    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node*f=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*myleft,*myright;
        if(l==-1){
            myleft=NULL;
        }else{
            myleft=new Node(l);
        }
        if(r==-1) myright = NULL;
        else myright=new Node(r);
        f->left=myleft;
        f->right=myright;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
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
int main (){
    Node*root=takeInput();
    printBNode(root);
    return 0;
}