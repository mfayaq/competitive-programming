#include<bits/stdc++.h>
#include<string>
using namespace std;


string flip(string name, int blockSize)
{
	//int size= name.size();
	string::iterator left = name.begin();
	string::iterator right = name.end();
	while((right-left)>=blockSize){
		reverse(left,left+blockSize);
		left+=blockSize;
	}
	return name;
}

int main()
{
	string name,name1="mohdfayaq";
	name = flip(name1,3);
	cout<<name;
}
