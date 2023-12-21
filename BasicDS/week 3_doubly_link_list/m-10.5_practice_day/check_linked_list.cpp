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
void printNodeReverse(Node*tail){
    Node*tem=tail;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->prev;
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
        if (v==-1)
        {
            break;
        }else
        {
            insertNode(head,tail,v);   
        }
    }
    Node*head2=NULL;
    Node*tail2=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1){
            break;
        }else
        {
            insertNode(head2,tail2,v);
        }
    }
    bool flag=true;
    if (size(head)!=size(head2))
    {
        flag=false;
    }else
    {
        while (head!=NULL)
        {
            if (head->val!=head2->val)
            {
                flag=false;
            }
            head=head->next;
            head2=head2->next;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}