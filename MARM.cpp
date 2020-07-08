#include<bits/stdc++.h>

int mod(std::string num, int b){
    int result = 0; 
  
    for (int i = 0; i < num.length(); i++) 
         result = (result*10 + (num[i]  - '0')) %b; 
  
    return result;
}

int main(){
    int t,n;
    std::string k;
    std::cin>>t;
    while (t--)
    {
        std::cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            std::cin>>a[i];
        }
        int l=mod(k,3*n);
        int left=0,right=n-1;
        while (l--)
        {
                a[left]^=a[right];
                left++;
                right--;
          
            if(left==n){
                left=0;
                right=n-1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            std::cout<<a[i]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}