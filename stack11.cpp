#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    stack<char> b,a;
    cin>>str;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(b.empty()){
            b.push(str[i]);
        }
        else if(b.top()<str[i]){
            // while(b.top()>str[i]){
                a.push(str[i]);
            // }
            // b.push(str[i]);
        }
        else{
            a.push(b.top());
            b.pop();
            b.push(str[i]);
        }
    }
    while(!b.empty()){
        a.push(b.top());
        b.pop();          
    }
    while(!a.empty()){
        cout<<a.top();
        a.pop();
    }
}
