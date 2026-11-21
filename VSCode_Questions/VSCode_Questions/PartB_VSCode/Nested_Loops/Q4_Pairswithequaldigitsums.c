/* Question: Pairs with equal digit sums
 * Complete standalone solution.
 */

#include <stdio.h>
#include <limits.h>
int digitSum(int x) {
    int sum = 0;
    while (x > 0) { sum += x % 10; x /= 10; }
    return sum;
}
int main(void) {
    int n, a[1000], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (digitSum(a[i]) == digitSum(a[j])) count++;
    printf("%d", count);
    return 0;
}
