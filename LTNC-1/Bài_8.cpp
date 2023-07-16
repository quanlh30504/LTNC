#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t>0)
    {
        int ans = 0;
        int n;
        cin>>n;
        int a[n];
        for(int  i =0;i<n;i++)
        {
            cin>>a[i];
        }
        int left_sum = 0;
        int total_sum = 0;
        for(int i = 0;i<n;i++)
        {
            total_sum += a[i];
        }
        for(int i = 0;i<n;i++)
        {
            if(left_sum == total_sum - left_sum - a[i])
            {
                ans = 1;
                break;
            }
            left_sum += a[i];
        }
        if(ans == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        --t;
    }
    
    return 0;
}