#include<bits/stdc++.h>
using namespace std;

int count(int a)
{
    int cnt = 0;
    string s = to_string(a);
    for(int i = 0;i<s.size();i++)
    {
        int x = s[i] - '0';
        if(x!= 0 && a%x==0) cnt++;
    }
    return cnt;
}


int main()
{
    int n; cin>>n;
    vector<int> vt(n);
    for(int i = 0;i<n;i++)
    {
        cin>>vt[i];
    }
    for(int i = 0;i<n;i++)
    {
        cout<<count( vt[i])<<endl;
    }
    return 0;
}