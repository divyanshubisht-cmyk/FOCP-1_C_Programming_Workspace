/* Question: Longest increasing contiguous run
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    int n, a[1000], current = 1, best = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    if (n == 0) { printf("0"); return 0; }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) current++;
        else current = 1;
        if (current > best) best = current;
    }
    printf("%d", best);
    return 0;
}
