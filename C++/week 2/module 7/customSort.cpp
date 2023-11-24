#include<bits/stdc++.h>
using namespace std;
class Frq{
    public:
    char val;
    int cnt;
};
bool cmp(Frq a,Frq b){
    return (a.cnt>b.cnt);
}
int main (){

    string s;
    cin>>s;
    Frq arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i].val=char(i+'a');
        arr[i].cnt=0;
    }
    for(char c:s){
        int ascii=int(c-'a');
        arr[ascii].cnt++;
    }
    sort(arr,arr+26,cmp);
    for (int i = 0; i < 26; i++)
    {
        for(int j=0;j<arr[i].cnt;j++){

        // cout<<arr[i].val<<" "<<arr[i].cnt<<endl;
        cout<<arr[i].val;
        }
    }
    
    
    return 0;
}