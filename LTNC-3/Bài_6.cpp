#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    string s;
    cin>>s;
    int key; cin>>key;
    if(key>26) key = key%26;
    string anpha = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] >= 'a' && s[i]<='z')
        {
        int id = anpha.find(s[i]);
        if(id+key <=25)
        {
            s[i] = anpha[id + key];
        }else if(id+key > 25)
        {
            s[i] = anpha[id+key - 26];
        }
        }else if(s[i]>='A' && s[i]<='Z')
        {
            char x = tolower(s[i]);
            int id = anpha.find(x);
            if(id+key <=25)
            {
                x = anpha[id + key];
            }else if(id+key > 25)
            {
                x = anpha[id+key - 26];
            }
            s[i] = toupper(x);
        }
        
    }
    cout<<s;
    
    return 0;
}
