/* Question: Maximum of three integers
 * Complete standalone solution.
 */

#include <stdio.h>
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", maxOfThree(a, b, c));
    return 0;
}
