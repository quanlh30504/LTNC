#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<unordered_map>
using namespace std;

int solve(int n, int *a, int *b)
{
    unordered_map<int,int> mpA, mpB;
    for(int i = 0;i<n;i++)
    {
        mpA[a[i]]++;
    }
    for(int i = 0;i<=n;i++)
    {
        mpB[b[i]]++;
    }
    for(auto &pair : mpB)
    {
        int id = pair.first;
        int numB = pair.second;
        int numA = mpA[id];
        if ( numB > numA)
        {
            return id;
        }
        
    }
    return -1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n], b[n+1];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i  =0;i<n+1;i++)
    {
        cin>>b[i];
    }
    int check = solve( n,a, b);
    cout<<check;
    
    return 0;
}
