#include <stdio.h>
#include<cmath>
#include<bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function    
    int a1 = *a;
    int b1 = *b;
    *a = a1 + b1;
    *b = abs(a1-b1);
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
