#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t = s.substr(8);
    string hour = s.substr(0,2);
    int h = stoi(hour);
    if(t == "AM")
    {
        if(h >= 0 && h <= 11){
            string time = s.substr(0,8);
            cout<<time;
        }else if(h == 12)
        {
            string time = s.substr(0,8);
            time[0] = '0';
            time[1] = '0';
            cout<<time;
        }
    }else if(t == "PM")
    {
        if(h>=1 && h<=11)
        {
            h +=12;
            string time = to_string(h) + s.substr(2,6);
            cout<<time;
        }else if(h == 0)
        {
            string time = "12"+s.substr(2,6);
            cout<<time;
        }else if(h==12)
        {
            cout<<s.substr(0,8);
          
        }
    }
}