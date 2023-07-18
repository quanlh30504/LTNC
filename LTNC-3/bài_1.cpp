#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char x = a[0];
    a[0] = b[0];
    b[0] = x;
    string s = a+" "+b;
    cout<<s<<endl;
    
    return 0;
}
