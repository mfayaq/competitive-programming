#include <iostream>
#include <stack>
#include <string>
using namespace std;

char smallest_alphabet(string a, int n)
{
	    char min = 'z';
 
    for (int i=0; i<n-1; i++)    
        if (a[i] < min)
            min = a[i];    
 
    return min;
}

char smallest_alphabet(string a,char curr_min, int n)
{
	    char min = 'z';
 
    for (int i=0; i<n; i++)    
        if ((a[i] < min)&&(a[i]>curr_min))
            min = a[i];    
 
    return min;
}

int main()
{
	stack <char> s;	
	int i=0;
	char temp,min;
	string ip;
	cin>>ip;
	min=smallest_alphabet(ip,ip.length());
	while(i<ip.length())
	{	
		 if(!s.empty()&&min==s.top())
		{
		cout<<min;
		s.pop();
		min=smallest_alphabet(ip,min,ip.length());
		}	
		
		else if(ip[i]==min)
		{
		cout<<ip[i];
		min=smallest_alphabet(ip,min,ip.length());
		i++;
		}
		
		else if(ip[i]!=min)
		{s.push(ip[i]);
		i++;	}
		
		
	}
	while(!s.empty())
	{ 
		 cout<<s.top();
		 s.pop();
	}
	return 0;
}
