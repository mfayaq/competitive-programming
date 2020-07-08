#include<iostream>
#include<vector>
using namespace std;

string xor_oper(string& s1,string& s2){
    string temp="";
    for(int i=0;i<10;i++){
        temp.push_back((char)(((s1[i]-'0')^(s2[i]-'0'))+'0'));
    }
    return temp;
}

int count_one(string& s){
    int count=0;
    for(int i=0;i<10;i++){
        if(s[i]=='1')
            count++;
    }
    return count;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<string> v;
        string temp;
        for(int i=0;i<n;i++){
            temp;
            cin>>temp;
            v.push_back(temp);
        }
        while(v.size()!=1){
            string s1,s2,s3;
            s1=v.back();
            v.pop_back();
            s2=v.back();
            v.pop_back();
            s3=xor_oper(s1,s2);
            v.push_back(s3);
        }
        cout<<count_one(v.back())<<"\n";
    }
}