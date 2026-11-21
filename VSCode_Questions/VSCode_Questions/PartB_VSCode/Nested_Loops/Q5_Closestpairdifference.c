/* Question: Closest pair difference
 * Complete standalone solution.
 */

#include <limits.h> for LLONG_MAX.
#include <stdio.h>
int main(void) {
    int n, a[1000];
    long long best = LLONG_MAX;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            long long d = (long long)a[i] - a[j];
            if (d < 0) d = -d;
            if (d < best) best = d;
        }
    printf("%lld", best);
    return 0;
}
