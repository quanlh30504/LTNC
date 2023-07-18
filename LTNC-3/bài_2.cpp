#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        string s = "";
        s = string(n-i,' ') + string(i,'#');
        cout<<s<<endl;
    }
    
    return 0;
}