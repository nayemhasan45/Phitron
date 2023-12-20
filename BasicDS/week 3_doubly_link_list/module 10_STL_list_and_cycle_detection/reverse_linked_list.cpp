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
void reverseNode(Node*&head,Node*curr){
    if(curr->next==NULL){
        head=curr;
        return;
    }
    reverseNode(head,curr->next);
    curr->next->next=curr;
    curr->next=NULL;
}
void printNode(Node*head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main (){
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    head->next=a;
    a->next=b; 
    printNode(head);
    reverseNode(head,head);
    printNode(head);
    return 0;
}