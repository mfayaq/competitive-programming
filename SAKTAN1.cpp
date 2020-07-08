#include<bits/stdc++.h>

int main()
{
    int t;
    std::cin>>t;
    while (t--)
    {
        int m,n,q,count=0;
        std::cin>>n>>m>>q;
        std::map<std::pair<int,int>,int> vis;
        std::set<int> x;
        std::set<int> y;
        for (int i = 0; i < q; i++)
        {   std::pair<int,int> temp;
            std::cin>>temp.first>>temp.second;
            temp.first--;
            temp.second--;
            vis[temp]++;
        }
        int curr_m=m,curr_n=n,_curr_m=0,_curr_n=0,i=0,j=0;
        for (auto it = vis.begin(); it!= vis.end(); it++)
        {
            if ((it->second)%2==0)
            {
                continue;
            }
            else
            {
                if (x.count(it->first.first))
                {
                    /*_curr_m++;
                    curr_m=m-_curr_m;
                    curr_n++;
                    _curr_n--;
                    flag=0;*/
                    _curr_m++;
                    curr_m=m-_curr_m;
                    if(i){
                        curr_n--;
                        _curr_n++;
                        i=0;
                    }
                    else
                    {
                        curr_n++;
                        _curr_n--;
                        i=1;
                    }
                     
                }

                else if (y.count(it->first.second))
                {
                    /*curr_m++;
                    _curr_m--;
                    _curr_n++;
                    curr_n=n-curr_n;
                    flag=0;*/
                    if (j)
                    {
                        curr_m--;
                        _curr_m++;
                        j=0;
                    }
                    else
                    {
                        _curr_m--;
                        curr_m++;
                        j=1;
                    }
                    _curr_n++;
                    curr_n--;
                
                    
                }
                
                else
                {
                    _curr_m++;
                    _curr_n++;
                    curr_m--;
                    curr_n--;
                    x.insert(it->first.first);
                    y.insert(it->first.second);
                }
            }
        }
        
        std::cout<<((curr_n*(m-curr_m))+((n-curr_n)*curr_m))<<std::endl;
    }
    
    return 0;
}
