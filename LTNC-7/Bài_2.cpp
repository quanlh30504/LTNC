#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s[4] ={"a","b","c","d"};
    string t = "";
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            for(int h = 0;h<4;h++)
            {
                string t = s[i] + s[j] + s[h];
                cout<<t<<endl;
                t = "";
            }
        }
    }
}
