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
void insertNode(Node*&head,Node*&tail,int v){
    Node*newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }else
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void printlist(Node*head){
    Node*tem=head;
    int val = INT_MIN;
    while (tem!=NULL)
    {
        // cout<<tem->val<<" ";
        if(val<tem->val){
            val=tem->val;
        }
        tem=tem->next;
    }
    cout<<val<<endl;
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
            insertNode(head,tail,v);
        }
    }
    printlist(head);
    return 0;
}