#include <math.h>
#include <stdio.h>

// fundamental theorem of arithmetic states that a number has a unique prime factorization
// keep dividing out smaller prime factors until we're left with the highest one

int main(void){
    long n = 600851475143;
    long new_n = n;
    for (int i = 1; i < sqrt(n); i++) { //only need to check to sqrt(n), any factors above would already have their pair factor divided out
        if (new_n % i == 0) new_n /= i;
        if (new_n == 1) {
            printf("Largest Factor: %d\n", i);
            return 0;
        }
    }
    printf("Largest Factor: %ld\n", new_n);
    return 0;
}
//Largest Factor: 6857
