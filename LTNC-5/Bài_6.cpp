#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> mp;
    int n; cin>>n;
    cin.ignore();
    while(n>0)
    {
        int a,b;
        string s;
        cin>>a;
        cin>>s;
        if(a == 1)
        {
            cin>>b;
            mp[s]+=b;
        }else if(a == 2)
        {
            mp[s] = 0;
        }else if(a == 3)
        {
            cout<<mp[s]<<endl;
        }
        --n;
    }
    return 0;
}



