#include<bits/stdc++.h>

int main()
{
    int t;
    std::cin>>t;
    while (t--)
    {
        int m,n,q,count=0;
        std::cin>>n>>m>>q;
        std::vector<std::vector<int>> mat(n,std::vector<int>(m,0));
        std::vector<std::pair<int,int>> vis;
        for (int i = 0; i < q; i++)
        {   std::pair<int,int> temp;
            std::cin>>temp.first>>temp.second;
            temp.first--;
            temp.second--;
            vis.push_back(temp);
        }
        for (auto it = vis.begin(); it!= vis.end(); it++)
        {
            for (int i = 0; i < mat[0].size(); i++)
            {
                mat.at(it->first)[i]++;
            }
            for (int i = 0; i < mat.size(); i++)
            {
                mat.at(i)[it->second]++;
            }
            
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat.at(j)[i]%2==1)
                {
                    count++;
                }   
            }
        }
        std::cout<<count<<std::endl;
    }
    
    return 0;
}
