#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
};
int main (){
    Node a,b;
    a.val=12;
    a.next=&b;
    a.next->next=&a;
    a.next->val=30;
    cout<<a.val<<endl;
    // cout<<b.val<<endl;
    cout<<a.next->next->val<<endl;
    return 0;
}