#include<iostream>
using namespace std;
int main()
{
	int board[4][4]={0};
	int x,y;
	cin>>x>>y;
	board[x][y]=1;
	for(int i=x,j=y;i<=3&j<=3;i++,j++)
	{	
		board[i][j]=1;
	}
	for(int i=x,j=y;i>=0&j>=0;i--,j--)
	{	
		board[i][j]=1;
	}
	for(int i=x,j=y;i>=0&j<=3;i--,j++)
	{	
		board[i][j]=1;
	}
	for(int i=x,j=y;i<=3&j>=0;i++,j--)
	{	
		board[i][j]=1;
	}
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			cout<<board[i][j]<<"\t";
		}
		cout<<endl;
	}
}
