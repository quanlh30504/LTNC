#include <iostream>
#include <cmath>
using namespace std;

int countWays(int X, int N, int num) {
    if (X == 0)
        return 1;
    
    int ways = 0;
    for (int i = num + 1; pow(i, N) <= X; i++) {
        ways += countWays(X - pow(i, N), N, i);
    }
    return ways;
}

int main() {
    int X, N;
    cin >> X;
    cin >> N;

    int result = countWays(X, N, 0);
    cout <<  result << endl;

    return 0;
}
