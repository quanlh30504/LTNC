#include<bits/stdc++.h>
using namespace std;
bool check(int x1,int v1, int x2, int v2)
{
    if(v1 == v2) return (x1 == x2);
    if(x1 == x2) return (v1 == v2);
    if((x1<v2 && v1<v2) || (x1>x2 && v1>v2)) return false;
    
    if(((x1-x2)%(v2-v1) == 0 && (x1-x2)/(v2-v1) >= 0)) return true;
    else return false;
}
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(check(x1, v1,  x2,  v2)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
