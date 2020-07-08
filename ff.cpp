#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
  
    else
        return gcd(b, a % b); 
} 

int main() {
	int n,a,b,c,d,num,den;
	cin>>n;
	a=pow(10,n)-pow(10,n-1);
	b=a/3;
	c=b/5;
	num=b-c;
	den=a;
	d=gcd(num,den);
	num=num/d;
	den=den/d;
	cout<<num<<"/"<<den;
}
