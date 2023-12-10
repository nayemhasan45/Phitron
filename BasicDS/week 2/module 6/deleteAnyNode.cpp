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
void insertAtTail(Node*&head,int v){
    Node*newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        cout<<head->val<<" "<<"is added to your linked list"<<endl;
    }else
    {
        Node*tem=head;
        while (tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=newNode;
        cout<<newNode->val<<" "<<"is added to your linked list"<<endl;
    }
}
void printLinklist(Node*head){
    Node*tem=head;
    cout<<"your link list is : ";
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void insertAtAnyPos(Node*&head,int v,int pos){
    Node*newNode= new Node(v);
    Node*tem=head;
    if(pos==0){
        newNode->next=head;
        head=newNode;
    }else
    {
        for (int i = 1; i <pos-1; i++)
        {
            tem=tem->next;
        }
        newNode->next=tem->next;
        tem->next=newNode;
    }
    
}
void deleteAnyNode(Node*&head,int pos){
    if(pos==0){
        Node*deleteNode=head;
        head=head->next;
        // Node*deleteNode=head;
        delete deleteNode;
    }else
    {
        Node*tem=head;
        for(int i=1;i<pos-1;i++){
            tem=tem->next;
        }
        Node*dleteNode=tem->next;
        tem->next=tem->next->next;
        delete dleteNode;   
    }
}
int main (){
    Node*head=NULL;
    while (true)
    {
        cout<<"option 1- insert at tail"<<endl;
        cout<<"option 2- insert at any position"<<endl;
        cout<<"option 3- show my linked list"<<endl;
        cout<<"option 4- delete any node"<<endl;
        cout<<"option 5- terminate my program"<<endl;
        int op;
        cin>>op;
        if (op==1)
        {
            cout<<"enter the value you want to add : ";
            int v;
            cin>>v;
            insertAtTail(head,v);
        }else if (op==2)
        {
            cout<<"enter the position : "<<endl;
            int pos;
            cin>>pos;
            cout<<"enter the value you want to insert : ";
            int v;
            cin>>v;
            insertAtAnyPos(head,v,pos);
        }else if(op==3){
            printLinklist(head);
        }else if(op==4){
            cout<<"enter the position: ";
            int pos;
            cin>>pos;
            deleteAnyNode(head,pos);
        }else if(op==5){
            break;
        }
    }
    return 0;
}