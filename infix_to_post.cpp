#include <iostream>
#include <stack>
#include <map>
using namespace std;

map<char,int> m{{'*',6},{'/',6},{'+',5},{'-',5},{'^',12}};

int main() {
	int t;
	cin>>t;
	while(t--){
	   string str;
	   stack<char> s;
       s.push('(');
	   cin>>str;
	   str.push_back(')');
	   for(int i=0;i<=str.size()-1;i++){
	       if(isalpha(str[i]))
	       std::cout<<str[i];
	       else{
	           if(s.empty()||str[i]=='('||(s.top()=='(')&&str[i]!=')'||m[s.top()]<m[str[i]])
	            s.push(str[i]);
	           else if(str[i]==')'){
	               while(s.top()!='('){
	                   char temp=s.top();
	                   s.pop();
	                   std::cout<<temp;
	               }
	               s.pop();
	           }
	           else if(m[s.top()]>=m[str[i]]){
	               while(!s.empty()&&s.top()!='('&&m[s.top()]>=m[str[i]]){
	                   char temp=s.top();
	                   s.pop();
	                   std::cout<<temp;
	               }
	               s.push(str[i]);
	           }
	       }
	   }
	   
	   std::cout<<"\n";
	}
	return 0;
}