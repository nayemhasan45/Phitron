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
void postorderPrint(Node*root){
    if(root==NULL){
        return;
    }
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->val<<" ";
}
int main (){
    Node*root=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    Node*e=new Node(60);
    Node*f=new Node(70);
    Node*g=new Node(80);
    Node*h=new Node(90);
    Node*i=new Node(100);
    //connection 
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    b->right=d;
    d->right=g;
    d->left=f;
    h->right=i;
    // call
    postorderPrint(root);
    return 0;
}