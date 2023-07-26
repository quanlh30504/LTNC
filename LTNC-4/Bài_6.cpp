#include<bits/stdc++.h>
using namespace std;


int UCLN (int a, int b)
{
    while(a!=b)
    {
        if(a>b) a-= b;
        if(a<b) b-=a;
    }
    return a;
}

int BCNN(int a, int b)
{
    return (a * b)/UCLN(a,b);
}


int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =0;i<m;i++)
    {
        cin>>b[i];
    }
    int bcnn = a[0];
    int ucln = b[0];
    for(int i = 1;i<n;i++)
    {
        bcnn = BCNN(bcnn,a[i]);
    }
    //cout<<bcnn<<endl;
    for(int i = 1;i<m;i++){
    
        ucln = UCLN(ucln,b[i]);
    }
    //cout<<ucln<<endl;
    set<int> st;
    int cnt = 0;
    for(int i = bcnn; i<=ucln;i+=bcnn)
    {
        if(ucln%i==0) cnt++;
    }
    // for(int i = ucln;i>=bcnn;i-=bcnn)
    // {
    //     if(st.find(i) != st.end() && ucln % i == 0) cnt++;
    // }
    cout<<cnt<<endl;

}
