/* Question: Count pairs with target sum
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    int n, target, a[1000], count = 0;
    scanf("%d %d", &n, &target);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == target) count++;
    printf("%d", count);
    return 0;
}
