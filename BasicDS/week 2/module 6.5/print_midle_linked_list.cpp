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
    int cnt=1;
    while (tem!=NULL)
    {
        cnt++;
        tem=tem->next;
    }
    cnt=cnt-1;
    tem=head;
    if(cnt%2==0){
        for (int i = 0; i < (cnt/2)-1; i++)
        {
            tem=tem->next;
        }
        cout<<tem->val<<" "<<tem->next->val;
    }else
    {
        for (int i = 0; i < cnt/2; i++)
        {
            tem=tem->next;
        }
        cout<<tem->val;
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
    printList(head);
    
    return 0;
}