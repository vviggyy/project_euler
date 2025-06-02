#include <stdio.h>
#include <math.h>

int main(void){
    int primes[10001]; // store all primes up until the last one
    primes[0] = 2; primes[1] = 3;
    int size = 2;

    int cand = 5; //candidate
    
    while(size < 10001) {
        int prime = 1;
        for(int i = 0; i < size && primes[i] * primes[i] <= cand; i++) {
            if (cand % primes[i] == 0) {
                prime = 0;
                break;
            } 
        }
        if (prime) {
            primes[size] = cand;
            size++;
        }
        cand += 2; 
    }
    printf("10,001st prime: %d\n", primes[10000]);
}
//10,001st prime: 104743