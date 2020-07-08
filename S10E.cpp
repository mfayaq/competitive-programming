#include <bits/stdc++.h>

int main()
{
    int t,count;
    std::cin>>t;
    while (t--)
    {
        int n,flag;
        count=0;
        std::cin>>n;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
            std::cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {   
            flag=1;
            for (int j=(i>=5)?5:i; j > 0; j--)
            {
                if (a[i]>=a[i-j])
                {
                    flag=0;
                    break;
                }
            }
            if (flag)
            {
                count++;
            }
        }        
    std::cout<<count<<"\n";
    }
    return 0;
}
