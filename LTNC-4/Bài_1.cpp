#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    if(n%2==0)
    {
        int l_cnt = 0;
        int r_cnt = 0;
        for(int i = 1;i<=p+1;i+=2)
        {
            
            if(i==p || i== p+1)
            {
                break;
            }
            ++l_cnt;
        }
        for(int i = n;i>=p-1;i-=2)
        {
            
            if(i==p || i == p-1) break;
            ++r_cnt;
        }
        if(r_cnt<l_cnt) cout<<r_cnt;
        else cout<<l_cnt;

    }else{
        int l_cnt = 0;
        int r_cnt = 0;
        for(int i = 1;i<=p+1;i+=2)
        {
            
            if(i==p || i== p+1)
            {
                break;
            }
            ++l_cnt;
        }
        for(int i = n;i>=p-1;i-=2)
        {
            
            if(i==p || i == p+1) break;
            ++r_cnt;
        }
        if(r_cnt<l_cnt) cout<<r_cnt;
        else cout<<l_cnt;

    }
    return 0;
}
