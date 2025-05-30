#include <stdio.h>
int sq_sum(float n) { //square of the sum (1 + 2 + ...)^2
    int sum = (n+1) * (n/2);
    return sum * sum;
}
int sum_sq(int n) {return (n * (n+1) * (2*n+1))/6;} // sum of the squares 1^2 + 2^2 + ...
int main(void){
    int N = 100;
    printf("Ans: %d\n", sq_sum(N) - sum_sq(N));
    return 0;
}