#include<iostream>
#include<utility>
#include<stack>

typedef pair<int,int> myPair;

int main(){
    int n;
    cin>>n;
    myPair arr[n];
    int result[n]={0};
    stack<myPair> s;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=make_pair(temp,i);
    }
    for(int i=0;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            result[arr[i].second]-=1;
        }
        else if(s.top()>arr[i]){
            s.push(arr[i]);
            result[arr[i].second]+=s.top().second;
        }
        else if(s.top()==arr[i]){
            int 
            s.top
        }
        else{

        }
    }
}