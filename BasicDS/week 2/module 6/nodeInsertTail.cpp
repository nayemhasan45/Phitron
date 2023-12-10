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
    Node * newNode= new Node(v);
    if(head==NULL){
        head=newNode;
    }else
    {
        Node * tem=head;
        while (tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=newNode;
        
    }
    
}
void printNode(Node * head){
    Node* tem=head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
int main (){
    Node* head=NULL;
    cout<<"option 1: Insert at tail :"<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insertAtTail(head,v);
    }
    printNode(head);

    return 0;
}