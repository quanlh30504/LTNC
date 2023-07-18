#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n;cin>>n;
    vector<long long>vt(n);
    for(int i = 0;i<n;i++)
    {
        cin>>vt[i];
    } 
    int single; cin>>single;
    int l, r;
    cin>>l>>r;
    vt.erase(vt.begin()+single - 1);
    vt.erase(vt.begin()+l-1, vt.begin()+r-1);
    cout<< vt.size()<<endl;
    for(auto &x : vt)
    {
        cout<<x<<" ";
    }
    return 0;
}
