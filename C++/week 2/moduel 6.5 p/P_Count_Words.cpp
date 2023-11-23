#include<bits/stdc++.h>
using namespace std;
int main (){

    string s;
    getline(cin,s);
    bool ch = false;
    int cnt = 0;
    for(char c:s){
        if(isalpha(c)>0){
            if (ch==false)
            {
                cnt++;
                ch=true;
            }
        }else
        {
            ch=false;
        }
        
    }
    cout<<cnt;
    return 0;
}