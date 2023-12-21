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
int size(Node*head){
    int cnt=0;
    while (head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
void printNode(Node*head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insertAtAnyPos(Node*head,Node*tail,int pos,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    for(int i=1;i<+pos-1;i++){
        tem=tem->next;
    }
    newNode->next=tem->next;
    newNode->prev=tem;
    tem->next->prev=newNode;
    tem->next=newNode;

}
void reverse(Node*head,Node*tail){
    while (tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    int t;
    cin>>t;
    while (t--)
    {
        int pos,v;
        cin>>pos;
        cin>>v;
        if (pos==0)
        {
            insertAtHead(head,tail,v);
        }else if(pos==size(head)){
            insertNode(head,tail,v);
        }else if(pos<size(head)){
            insertAtAnyPos(head,tail,pos,v);
        }else if(pos>size(head)){
            cout<<"invalid"<<endl;
        }
        if (pos<=size(head))
        {
            printNode(head);
            reverse(head,tail);
        }
    }
    return 0;
}