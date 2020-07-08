#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,arr[100];
	cin>>t;
	
	for(int k = 0 ; k < t ; k++)
	{	                                                                                                                                                                                                                                                
		int n;
		cin>>n;
		map<string,float> m;
		float ans = 0;
		for(int i = 0 ; i < n ; i++)
		{
			int flag = -1;
			string s;
			cin>>s;
			if(m.count(s))
			{
				ans = ans + m[s]/2;
	
			}
			
			else
			{
				float score = 0;
				for(int j = 0; j < s.size() ; j++)
				{
					if(flag == -1)
					{
						if(s[j]=='d' || s[j] =='f')
						{
							score = score + 0.2;
							flag = 0;						
						}
						
						else if(s[j]=='j' || s[j] =='k')
						{
							score = score + 0.2;
							flag = 1;						
						}				
					}
	
					else if(flag == 0)
					{
						if(s[j]=='d' || s[j] =='f')
						{
							score = score + 0.4;
							flag = 0;						
						}
						
						else if(s[j]=='j' || s[j] =='k')
						{
							score = score + 0.2;
							flag = 1;						
						}				
										
					}			
	
					else if(flag == 1)
					{
						if(s[j]=='d' || s[j] =='f')
						{
							score = score + 0.2;
							flag = 0;						
						}
						
						else if(s[j]=='j' || s[j] =='k')
						{
							score = score + 0.4;
							flag = 1;						
						}				
										
					}				
	
				}		
	
				m[s] = score;
				ans = ans + score;
			
			}
			
		}
	
		int a = ans*10;
		arr[k]= a;
		
	}
	
	for(int k = 0 ; k < t ; k++)	
	{
		cout<<arr[k]<<"\n";			
	}
	return 0;
}
