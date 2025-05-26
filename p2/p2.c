#include <stdio.h>
#include <stdlib.h>

// DP solution is easier to work with than recursive
int main(void) {
    const int MAX_LEN = 100; //4M
    long long fibs[MAX_LEN];
    long long total = 2;

    fibs[0] = 1; fibs[1] = 2;

    for (int i = 2; i < MAX_LEN; i++){
        fibs[i] = fibs[i-1] + fibs[i-2];
        if (fibs[i] > 4000000) {break;}
        if (i % 3 == 1) {
            total += fibs[i];
        }
    }

    printf("Total: %lld\n", total);
    return 0;
}
//Total: 4613732
