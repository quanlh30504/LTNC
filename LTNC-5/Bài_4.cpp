#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int t; cin>>t;
    while(t>0)
    {
        int x; cin>>x;
        auto it = lower_bound(a.begin(), a.end(),x);
        int id = it - a.begin();
        if(a[id] == x)
        {
            cout<<"Yes "<<id+1<<endl;
        }else{
            cout<<"No "<<id+1<<endl;
        }
        --t;
    }
    return 0;
}
