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
    Node * newNode = new Node(v);
    if (head==NULL)
    {
        head=newNode;
    }else{
        Node * tem = head;
        while (tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=newNode;
    }
}
void insertAtAnyPos(Node*&head,int v,int pos){
    Node* newNode=new Node(v);
    Node* tem = head;
    for(int i=1;i<pos;i++){
        tem=tem->next;
    }
    newNode->next=tem->next;
    tem->next=newNode;
}
void printList(Node*head){
    Node* tem=head;
    cout<<"your list is : ";
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int main (){
    Node * head = NULL;
    while (true)
    {
        cout<<"option 1 : for insert at tail : "<<endl;
        cout<<"option 2 : for insert at any postion : "<<endl;
        cout<<"option 3 : for print the linked list : "<<endl;
        cout<<"option 4 : for terminate the program : "<<endl;
        int op;
        cin>>op;
        if (op==1)
        {
            cout<<"enter the value : "<<endl;
            int v;
            cin>>v;
            insertAtTail(head,v);
        }else if(op==2){
            cout<<"enter the value : "<<endl;
            int v,pos;
            cin>>v;
            cout<<"enter the position : "<<endl;
            cin>>pos;
            insertAtAnyPos(head,v,pos);
        }else if(op==3){
            printList(head);
        }else if(op==4){
            break;
        } 
    }
    return 0;
}