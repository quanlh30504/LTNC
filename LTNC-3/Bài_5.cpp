
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    string source = "hackerrank";
    for(int i = 1; i<=t;i++)
    {
        string s;
        cin>>s;
        int id = -1;
        int check = 1;
        for(int j = 0; j<source.size();j++)
        {
            for(int k = id + 1;k<s.size();k++)
            {
                if(source[j] == s[k] && k != (s.size()-1))
                {
                    id = k;
                    break;
                }
                else if(k == s.size()-1)
                {
                    if(source[j] != s[k]) 
                    {
                        check = 0;
                        break;
                    }else{
                        if( j != source.size()-1){
                            check = 0;
                            break;
                        }
                    }
                }
            }
            if(check == 0)
            {
                break;
            }
        }
        if(check == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
