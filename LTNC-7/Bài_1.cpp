#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int a[], int l, int r, int key)
{
        if(l<=r){
        int mid = l +  (r-l)/2;
        if(a[mid] == key) return 1;
        else if(key > a[mid]) return solve(a, mid + 1, r , key);
        else  return solve(a,l,mid-1,key);
        }
        return 0;
}
int main() {
    int n; cin>>n;
    int a[10000];
    
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int key; cin>>key;
    if(solve(a,0,n-1,key)) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}
