#include <stdio.h>
int multiplesUpto(int n, int M) {return (M-1)/n;}//n #get number of multiples of n upto M 
float sumN(int n) {return (n+1) * ((float)n/2);} //sum of natural nums upto n
int main(void){
    int ans = 3 * sumN(multiplesUpto(3,1000)) + 5 * sumN(multiplesUpto(5, 1000)) - 15 * sumN(multiplesUpto(15, 1000));
    printf("Ans: %d\n", ans);
}