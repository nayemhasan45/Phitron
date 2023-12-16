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
void insertAtAnyPos(Node*head,Node*&tail,int pos,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tem=tem->next;
    }
    newNode->next=tem->next;
    tem->next=newNode;
    newNode->prev=tem;
    newNode->next->prev=newNode;
}
void insertAtHead(Node*&head,Node*&tail,int v){
    Node*newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }else
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;   
    }
}
int size(Node*head){
    int cnt=0;
    while (head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
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
    int v,pos;
    cout<<"enter the value and postion";
    cin>>v>>pos;
    if(pos==0){
        insertAtHead(head,tail,v);
    }else if(pos==size(head)){
        insertAtTail(tail,head,v);
    }else if(pos<size(head)){
        insertAtAnyPos(head,tail,pos,v);
    }else{
        cout<<"invalid position";
    }
    printNode(head);
    printNodeReverse(tail);
    return 0;
}