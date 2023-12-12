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
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
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
    int size1 = llSize(head);
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
    int size2=llSize(head);
    if(size1==(size2)-size1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    // cout<<size1<<" "<<size2;
    return 0;
}