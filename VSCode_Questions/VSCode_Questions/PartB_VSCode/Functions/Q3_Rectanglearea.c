/* Question: Rectangle area
 * Complete standalone solution.
 */

#include <stdio.h>
long long area(long long length, long long width) {
    return length * width;
}
int main(void) {
    long long l, w;
    scanf("%lld %lld", &l, &w);
    printf("%lld", area(l, w));
    return 0;
}
