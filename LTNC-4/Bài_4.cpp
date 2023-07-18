#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n, p ;
    cin>>n>>p;
    vector<vector<long long>> vt(n);
    for(int i = 0;i<n;i++)
    {
        long long x;
        cin>>x;
        for(long long j = 0;j<x;j++)
        {
            long long a; cin>>a;
            vt[i].push_back((a));
        }
    }
    long long b[p][2];
    for(long long i = 0;i<p;i++)
    {
        cin>>b[i][0]>>b[i][1];
    }
    for(int i = 0;i<p;i++)
    {
        cout<<vt[b[i][0]][b[i][1]]<<endl;
    }
    return 0;
}