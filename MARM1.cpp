#include<bits/stdc++.h>


int main(){
    int t,n;
    long k;
    std::cin>>t;
    while (t--)
    {
        std::cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            std::cin>>a[i];
        }
        int l=k;
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