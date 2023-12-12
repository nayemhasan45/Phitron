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
void printLinkedList(Node*head){
    Node*tem=head;
    if (tem==NULL)
    {
        return;
    }
    printLinkedList(tem->next);
    cout<<tem->val<<" ";
    // tem=tem->next;
}
int llSize(Node*head){
    Node*tem=head;
    int cnt=0;
    while (tem!=NULL)
    {
        cnt++;
        tem=tem->next;
    }
    return cnt;
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
    printLinkedList(head); 
    return 0;
}