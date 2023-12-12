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
void getInputList(Node*&head,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    if (head==NULL)
    {
        head=newNode;
    }else{
        while (tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=newNode;
    }
    
}
void printList(Node*head){
    Node* tem= head;
    cout<<"your linked list is : ";
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl<<endl;
}
void insertAtAnyPos(Node*&head,int pos,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    if(pos==0){
        newNode->next=head;
        head = newNode;
    }else
    {
         for (int i = 1; i <= pos-1; i++)
    {
        tem=tem->next;
        if (tem==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
        
    }
    newNode->next=tem->next;
    tem->next=newNode;
    }
}
int main (){
    Node*head=NULL;
    while (true)
    {   int v;
        cin>>v;
        if(v==-1){
            break;
        }else
        {
            getInputList(head,v);   
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int pos,v;
        cin>>pos>>v;
        insertAtAnyPos(head,pos,v);
        printList(head);
    }
    return 0;
}