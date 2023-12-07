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
void insertAtTail(Node* &head,int v){
    Node* newNode= new Node(v);
    if (head==NULL)
    {
        head=newNode;
    }else
    {
        Node* tem=head;
        while (tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=newNode;
    }   
}
void printList(Node*head){
    Node* tem=head;
    cout<<"your link list is : ";
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int main (){
    Node* head = NULL;
    while (true)
    {
        cout<<"option 1 for insert at tail :"<<endl;
        cout<<"option 2 for print the linklist :"<<endl;
        cout<<"option 3 for terminate :"<<endl;
        int op;
        cin>>op;
        if (op==1)
        {
            int v;
            cout<<"enter the value : ";
            cin>>v;
            insertAtTail(head,v);
        }else if(op==2){
            printList(head);
        }else if(op==3){
            break;
        }
    }
    
    return 0;
}