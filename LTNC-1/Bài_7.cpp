#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int pos = 0;
    int neg = 0;
    int zero = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] >0) pos++;
        if(a[i]<0) neg++;
        if(a[i] == 0) zero++;
    }
    cout<<fixed<<setprecision(6)<<1.0*pos/n<<endl;
    cout<<fixed<<setprecision(6)<<1.0*neg/n<<endl;
    cout<<fixed<<setprecision(6)<<1.0*zero/n;
    
    return 0;
}

