#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <string>
#include <cstring>
#include <string.h>
#include <cstdlib>
#include <stack>
#include <algorithm>
#include <queue>
#include <cstdio>

using namespace std;

int A, B, C;

int power(int n, int k) {
    if(k==0) return 1;
    
    int temp = power(n, k/2);
    int result = 1LL * temp * temp % C;
    
    if(k%2) result = 1LL * result * n % C;
    return result;
}

int main(void) {
    scanf("%d%d%d",&A,&B,&C);
    printf("%d",power(A,B));
}
