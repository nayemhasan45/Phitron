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
void sort(Node*head){
    while (head->next!=NULL)
    {
        for(Node*tem=head->next;tem!=NULL;tem=tem->next){
            if (head->val>tem->val)
            {
                swap(head->val,tem->val);
            }
        }
        head=head->next;
    }
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
    sort(head);
    printNode(head);
    return 0;
}