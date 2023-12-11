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
void insertAtLinkedList(Node*&head,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    if(head==NULL){
        head=newNode;
    }else
    {
        while (tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=newNode;
        // cout<<newNode->val<<" is added to your string "<<endl;
    }
}
void printLinkedList(Node*head){
    Node*tem=head;
    int frq[101]={0};
    while (tem!=NULL)
    {
        // cout<<tem->val<<" ";
        frq[tem->val]++;
        tem=tem->next;
    }
    bool flag=false;
    for (int i = 1; i <=100; i++)
    {
        // cout<<i<<" "<<frq[i]<<endl;
        if(frq[i]>1){
            flag=true;
            break;
        }else
        {
            flag=false;
        }
    }
    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main (){
    Node*head=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if (v==-1)
        {
            break;
        }else
        {
           insertAtLinkedList(head,v);
        }
    }
    printLinkedList(head);
    return 0;
}