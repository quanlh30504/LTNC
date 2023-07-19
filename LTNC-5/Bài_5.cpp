#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>st;  
    int n; cin>>n;
    while(n>0)
    {
        int a,b;
        cin>>a>>b;
        if(a == 1)
        {
            st.insert(b);
        }else if(a == 2)
        {
            st.erase(b);
        }
        else
        {
            if(st.find(b) != st.end())
            {
                cout<<"Yes"<<endl;
            }else cout<<"No"<<endl;
        }
        --n;
    }
    return 0;
}



