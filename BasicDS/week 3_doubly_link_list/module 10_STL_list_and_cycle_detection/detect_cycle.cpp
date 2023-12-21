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
int main (){
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a;
    Node*here=head;
    Node*tortoise=head;
    bool flag=false;
    while (here!=NULL&&here->next!=NULL)
    {
        here=here->next->next;
        tortoise=tortoise->next;
        if (here==tortoise)
        {
            flag=true;
            break;
        }
        
    }
    if(flag) cout<<"cycle detected";
    else cout<<"no cycle";
    return 0;
}