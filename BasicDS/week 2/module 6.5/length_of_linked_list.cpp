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
    Node*tem=head;
    // while (tem!=NULL)
    // {
    //     cout<<tem->val<<" ";
    //     tem=tem->next;
    // }
    // cout<<endl;
    int cnt=1;
    while (tem!=NULL)
    {
        cnt++;
        tem=tem->next;
    }
    cout<<cnt-1;
}
int main (){
    Node*head=NULL;
    while (true)
    {
        cout<<"enter the values : ";
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