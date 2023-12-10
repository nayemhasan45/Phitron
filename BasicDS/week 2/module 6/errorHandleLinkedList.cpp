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
void insertAtHead(Node*&head,int v){
    Node*newNode=new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<head->val<<" inserted at head "<<endl;
}
void insertAtTail(Node* head,int v){
    Node*newNode= new Node(v);
    Node*tem=head;
    while (tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=newNode;
    cout<<newNode->val<<" is inserted at the tail "<<endl;
}
void insertAtAnyPos(Node* head,int v,int pos){
    Node*newNode = new Node(v);
    Node*tem=head;
    if (tem!=NULL)
    {
        for(int i=1;i<=pos-1;i++){
            tem=tem->next;
            if(tem==NULL){
                cout<<endl<<"invalid index"<<endl<<endl;
                return;
            }
        }
        newNode->next=tem->next;
        tem->next=newNode;
        cout<<newNode->val<<" is added in your list "<<endl<<endl;
    }else
    {
        cout<<endl<<"invalid index"<<endl<<"there is no node in your linked list :) "<<endl<<endl;
    } 
}
void deleteFromHead(Node*&head){
    if(head!=NULL){
        Node*deleteNode = head;
        cout<<head->val<<" is deleted from the linkedlist"<<endl;
        head = head->next;
        delete deleteNode;
    }else
    {
        cout<<endl<<"invalid index"<<endl<<"there is no node in your linked list.. plese add at-lest one node :) "<<endl<<endl;
    }
    
}
void deleteFromAnyPos(Node*head,int pos){
    if(head!=NULL){
        Node*tem=head;
        for(int i=1;i<=pos-1;i++){
            tem=tem->next;
            if(tem==NULL){
                cout<<endl<<"invalid index"<<endl<<"there is no such position"<<endl<<endl;
                return;
            }
        }
        if (tem->next==NULL)
        {
            cout<<endl<<"invalid index"<<endl<<"there is no such position"<<endl<<endl;
            return;
        }
        Node*deleteNode=tem->next;
        tem->next=tem->next->next;
        delete deleteNode;
    }else
    {
        cout<<endl<<"invalid index"<<endl<<"there is no node in your linked list.. plese add at-lest one node :) "<<endl<<endl;
    }
    
}
void printLinklist(Node*head){
    Node* tem= head;
    cout<<"your linked list is : ";
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl<<endl;
}
int main (){
    Node*head = NULL;
    while (true)
    {
        cout<<"option-1 for insert at head "<<endl;//done
        cout<<"option-2 for insert at tail "<<endl;//done
        cout<<"option-3 for insert at any position "<<endl;//done
        cout<<"option-4 for delete a node from head "<<endl;//done
        cout<<"option-5 for delete a node from any pos "<<endl;//done
        cout<<"option-6 for print your linked list "<<endl;
        cout<<"option-7 for terminate the program "<<endl;
        int op;
        cin>>op;
        if(op>=1&&op<=7){
            if(op==1){
                cout<<"enter the value : ";
                int v;
                cin>>v;
                insertAtHead(head,v);
            }else if(op==2){
                cout<<"enter the value : ";
                int v;
                cin>>v;
                if(head==NULL){
                    insertAtHead(head,v);
                }else
                {
                    insertAtTail(head,v);
                }
            }else if(op==3){
                cout<<"enter the pos : ";
                int pos;
                cin>>pos;
                cout<<"enter the value : ";
                int v;
                cin>>v;
                if (pos==0)
                {
                    insertAtHead(head,v);
                }else
                {
                    insertAtAnyPos(head,v,pos);
                }  
            }else if(op==4){
                deleteFromHead(head);
            }else if(op==5){
                cout<<"enter a position which you want to delete ";
                int pos;
                cin>>pos;
                if(pos==0){
                    deleteFromHead(head);
                }else
                {
                    deleteFromAnyPos(head,pos);
                }
            }else if(op==6){
                printLinklist(head);
            }else if(op==7){
                cout<<"your program is tarminated :)";
                break;
            }
        }else
        {
            cout<<"plese enter 1-7 ^:^ (:)(:) "<<endl<<endl;   
        }
    }
    
    return 0;
}