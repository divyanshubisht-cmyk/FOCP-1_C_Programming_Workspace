/* Question: Convert seconds
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    long long total, hours, minutes, seconds;
    scanf("%lld", &total);
    hours = total / 3600;
    total %= 3600;
    minutes = total / 60;
    seconds = total % 60;
    printf("%lld %lld %lld", hours, minutes, seconds);
    return 0;
}
