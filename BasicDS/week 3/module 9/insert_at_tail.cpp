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
void insertAtTail(Node*&tail,Node*&head,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
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
int main (){
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*tail=b;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    insertAtTail(tail,head,40);
    insertAtTail(tail,head,50);
    printNode(head);
    printNodeReverse(tail);
    return 0;
}