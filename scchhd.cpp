#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void whileNotEmpty(stack<int>& s,vector<int>& x){
    while(!s.empty()){
        x[s.top()]=-1;
        s.pop();
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    stack<int> s;
    vector<int> x(n,0),y(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(s.empty()){
            s.push(i);
        }
        while(!s.empty()&&arr[s.top()]<arr[i]){
            x[s.top()]=i+1;
            s.pop();
        }
            s.push(i);
    }
    whileNotEmpty(s,x);
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            s.push(i);
        }
        while(!s.empty()&&arr[s.top()]<arr[i]){
            y[s.top()]=i+1;
            s.pop();
        }
            s.push(i);
    }
    whileNotEmpty(s,y);
    for(int i=0;i<n;i++)
        cout<<x[i]+y[i]<<" ";
}