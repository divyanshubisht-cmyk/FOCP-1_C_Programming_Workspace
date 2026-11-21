/* Question: Piecewise function
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    long long x, result;
    scanf("%lld", &x);
    if (x < 0)
         result = x*x + 2*x + 1;
    else if (x < 10)
         result = 3*x + 2;
    else
         result = 5*x - 7;
    printf("%lld", result);
    return 0;
}
