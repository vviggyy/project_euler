#include <stdio.h>
#include <math.h>

int main(void){
    int primes[10001]; // store all primes up until the last one
    primes[0] = 2; primes[1] = 3;
    int size = 2, div;

    int cand = primes[size - 1]; //candidate
    
    while(size < 10001)
        for(int i = 0; i < size; i++) {
            div = primes[i];
            if ((cand % div == 0) || (div > sqrt(cand))) {
                cand++;
                break;
            } else if (i == size - 1) {
                primes[size] = cand;
                size++;
            }
        }
    printf("10,001st prime: %d\n", primes[10000]);
    

}