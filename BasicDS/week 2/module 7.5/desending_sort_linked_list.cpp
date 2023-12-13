#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*next;
        Node(int val){
                this->val=val;
                this->next=NULL;
            }
};
void addLinkList(Node*&head,Node*&tail,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    if(tem==NULL){
        head=newNode;
        tail=newNode;
    }else{
        tail->next=newNode;
        tail=newNode;
    }
}
void sortNode(Node*head){
    Node*tem=head;
    for(Node*i=tem;i->next!=NULL;i=i->next){
        for (Node* j = i->next; j!=NULL; j=j->next)
        {
            if (i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }   
   
    }
}
void printlist(Node*head){
    Node*tem=head;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1){
            break;
        }else
        {
            addLinkList(head,tail,v);
        }
    }
    sortNode(head);
    printlist(head);
    return 0;
}