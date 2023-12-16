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
void printNode(Node*head){
    Node*tem=head;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void printNodeReverse(Node*tail){
    Node*tem=tail;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->prev;
    }
    cout<<endl;
}
void insertAtHead(Node*&head,int v){
    Node*newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
    }else
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

int main (){
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*tail=b;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    insertAtHead(head,100);
    insertAtHead(head,200);
    printNode(head);
    printNodeReverse(tail);
    return 0;
}