#include <stdio.h>

//checks by reversing
int palindrome(int x) {
    int rev = 0, orig = x;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return orig == rev;
}
//brute force is fine for this
int main(void) {
    int prod = 0, max = 0;
    for (int i = 999; i > 0; --i){
        for (int j = 999; j > 0; --j){
            prod = i * j;
            if (palindrome(prod) && prod > max) {
                max = prod;
            }
        }
    }
    printf("Largest Palindrome: %d\n", max);
    return 1;
}
