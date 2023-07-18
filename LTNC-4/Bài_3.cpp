#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;
    while(left < right)
    {
        if(s[left] != s[right])
        {
            return false; 
        }
        ++left;
        --right;
    }
    return true;
}

int solve(string s)
{
    if(checkPalindrome(s))
    {
        return -1;
    }
    int left = 0;
    int right = s.size() -1 ;
    while(left < right)
    {
        if(s[left] != s[right])
        {
            string temp = s.substr(0,left) + s.substr(left + 1);
            if(checkPalindrome(temp)) return left;
            string temp_1 = s.substr(0,right) + s.substr(right+1);
            if(checkPalindrome(temp_1)) return right;
        }
        ++left;
        --right;
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t>0)
    {
    string s;
    getline(cin,s);
    if(solve(s) == -1) cout<<-1<<endl;
    else cout<<solve(s)<<endl;
    --t;
    }
    return 0;
}
