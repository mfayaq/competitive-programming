#include<bits/stdc++.h>

std::vector<std::pair<int,int>> v;

void compare(int l,int m,int r){
    for (int i = l; i <= m; i++)
    {
        
    }
    
}

void divide(int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        divide(l, m); 
        divide(m+1, r); 
        compare(l, m, r); 
    } 
}
  

int main(){
    int t,n;
    std::cin>>t;
    while (t--)
    {
        std::cin>>n;
        int msv;
        for (int i = 0; i < n; i++)
        {
            int temp;
            std::cin>>temp;
            std::pair<int,int> t;
            t.first=temp;
            t.second=0;
            v.push_back(t);
        }
        divide(0,v.size()-1);
        int max=0;
        for (auto it = v.begin(); it!= v.end(); it++)
        {
            if ((it->second)>max)
            {
                max=it->first;
            }
            
        }
        std::cout<<max<<"\n";
    }
    
}