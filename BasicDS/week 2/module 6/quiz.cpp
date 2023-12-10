#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
    p = NULL;
}
int main() {
    int val = 10;
    int *ptr = &val;
    ptr=NULL;
    fun(ptr);
    // cout << *ptr << endl;
    cout<<*ptr;
    return 0;
}
