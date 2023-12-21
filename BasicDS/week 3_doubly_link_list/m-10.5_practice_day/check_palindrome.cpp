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
void checkPalindrome(Node*&head,Node*tail){
    Node*i=head;
    Node*j=tail;
    bool flag=true;
    while (i!=j&&i->next!=j)
    {
        if (i->val!=j->val)
        {
            flag=false;
        }
        i=i->next;
        j=j->prev;
    }
    if (i->val!=j->val)
    {
        flag=false;
    }
    if(flag) cout<<"yes";
    else cout<<"no";
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
    // printNode(head);
    checkPalindrome(head,tail);
    return 0;
}