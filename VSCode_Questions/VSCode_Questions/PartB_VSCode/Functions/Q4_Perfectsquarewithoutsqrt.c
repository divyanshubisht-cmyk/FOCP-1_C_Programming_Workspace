/* Question: Perfect square without sqrt
 * Complete standalone solution.
 */

#include <stdio.h>
int isPerfectSquare(long long n) {
    if (n < 0) return 0;
    for (long long i = 0; i * i <= n; i++)
        if (i * i == n) return 1;
    return 0;
}
int main(void) {
    long long n;
    scanf("%lld", &n);
    printf("%d", isPerfectSquare(n));
    return 0;
}
