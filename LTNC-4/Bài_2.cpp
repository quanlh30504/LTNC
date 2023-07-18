#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    int n; cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =0;i<n;i++)
    {
        mp[a[i]]++;
    }
    auto it = mp.begin();
    int max = it->second;
    for(pair<int,int> x : mp)
    {
        if(x.second >= max)
        {
            max = x.second;
        }
    }
    cout<<n-max<<endl;
    
}