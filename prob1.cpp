#include<bits/stdc++.h>

using namespace std;


void golGappas(int quantity, int size_plate,int kids[])
{
	//int no_of_kids=kids.size();
	int i=0; 
	cout<<quantity<<endl;
	while(quantity>0)
	{
			if(kids[i]>size_plate&&quantity>=kids[i])
			{
				quantity-=size_plate;
				i=(i+1)%3;
				cout<<quantity<<endl;
			}	
			else if(kids[i]<=size_plate&&quantity>=kids[i])
			{
				quantity-=kids[i];
				i=(i+1)%3;
				cout<<quantity<<endl;
			}
			else
			{
				quantity-=quantity;
				cout<<quantity<<endl;
			}
	}
}

int main()
{
	//int quantity, int size_plate,int kids[3];
	int kids[3]={5,3,2};
	golGappas(100,4,kids);
	return 0;
}
	
