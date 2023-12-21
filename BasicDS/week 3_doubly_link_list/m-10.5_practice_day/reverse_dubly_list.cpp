#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*next;
        Node*prev;
        Node(int val){
                this->val=val;
                this->next=NULL;
                this->prev=NULL;
            }
};
void insertNode(Node*&head,Node*&tail,int v){
    Node*newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }else
    {
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;   
    }
}
void printNode(Node*head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(Node*&head,Node*tail){
    Node*i=head;
    Node*j=tail;
    while (i!=j&&i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if (v==-1)
        {
            break;
        }else
        {
            insertNode(head,tail,v);   
        }
    }
    printNode(head);
    reverse(head,tail);
    printNode(head);
    return 0;
}