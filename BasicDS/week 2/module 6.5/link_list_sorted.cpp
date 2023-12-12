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
    bool flag=true;
    int cnt=1;
    while (tem!=NULL)
    {
        cnt++;
        tem=tem->next;
    }
    tem=head;
    for (int i = 0; i < cnt-2; i++)
    {
        if(tem->val>tem->next->val){
            flag=false;
            break;
        }
        tem=tem->next;
    }
    
    if(flag){
        cout<<"yes";
    }else
    {
        cout<<"no";
    }
    
    cout<<endl<<endl;
}
int main (){
    Node*head=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1){
            break;
        }else
        {
            getInputList(head,v);   
        }
    }
    printList(head);
    
    return 0;
}