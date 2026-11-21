/* Question: Run-length encode
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    char s[1000];
    int i = 0, count;
    scanf("%999s", s);
    while (s[i] != '\0') {
        count = 1;
        while (s[i] == s[i+1] && s[i+1] != '\0') {
             count++; i++;
        }
        printf("%c%d", s[i], count);
        i++;
    }
    return 0;
}
