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
void insertAtAnyPos(Node*head,int v,int pos){
    Node*newNode=new Node(v);
    Node*tem=head;
    for (int i = 1; i <=pos-1; i++)
    {
        tem=tem->next;
    }
    newNode->next=tem->next;
    tem->next=newNode;
    newNode->prev=tem;
    newNode->next->prev=newNode;
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
    insertAtAnyPos(head,111,1);
    printNode(head);
    printNodeReverse(tail);

    return 0;
}