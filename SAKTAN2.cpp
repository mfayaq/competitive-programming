#include<bits/stdc++.h>

int main()
{
    int t;
    std::cin>>t;
    while (t--)
    {
        int m,n,q,count=0;
        std::cin>>n>>m>>q;
        std::vector<std::pair<int,int>> vis;
        std::set<int> x;
        std::set<int> y;
        for (int i = 0; i < q; i++)
        {   std::pair<int,int> temp;
            std::cin>>temp.first>>temp.second;
            temp.first--;
            temp.second--;
            vis.push_back(temp);
        }
        int curr_m=m,curr_n=n,_curr_m=0,_curr_n=0,flag,i=0,j=0,k[n][m]={0};
        for (auto it = vis.begin(); it!= vis.end(); it++)
        {   
            if (x.count(it->first)&&y.count(it->second))
            {
                if (k[it->first][it->second])
                {
                    _curr_m++;
                    _curr_n++;
                    k[it->first][it->second]=0;
                }
                else
                {
                    _curr_m--;
                    _curr_n--;            
                    k[it->first][it->second]=1;
                }
                curr_m=m-_curr_m;
                curr_n=n-_curr_n;
            }
            
            else
            {
                if (x.count(it->first))
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

            else if (y.count(it->second))
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
                flag=0;
                
            }
            
            else
            {
                _curr_m++;
                _curr_n++;
                curr_m--;
                curr_n--;
                x.insert(it->first);
                y.insert(it->second);
            }
                
            }                
            
        }
        
        std::cout<<((curr_n*(_curr_m))+((_curr_n)*curr_m))<<std::endl;
    }
    
    return 0;
}
