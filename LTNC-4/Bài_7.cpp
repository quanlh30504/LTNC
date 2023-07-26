#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, h; cin >> w >> h;
    vector<string> a(h);
    for (auto & i : a) cin >> i;
    for (int i = 1; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (a[i][j] == 'R') continue;
            for (int k = -1; k < 2; ++k) {
                int new_j = j + k;
                if (new_j < 0 || new_j >= w) continue;
                if (a[i-1][new_j]=='Y' && a[i-1][j] != 'R')
                    a[i][j] = 'Y';
            }
        }
    }
    int cnt = 0;
    for (auto i : a[h-1]) cnt += i == 'Y';
    if (cnt) cout << "YES";
    else cout << "NO";
}
