/* Question: Count relatively prime values
 * Complete standalone solution.
 */

#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) { int r = a % b; a = b; b = r; }
    return a;
}
int main(void) {
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    for (int x = 1; x <= m; x++)
        if (gcd(x, n) == 1) count++;
    printf("%d", count);
    return 0;
}
