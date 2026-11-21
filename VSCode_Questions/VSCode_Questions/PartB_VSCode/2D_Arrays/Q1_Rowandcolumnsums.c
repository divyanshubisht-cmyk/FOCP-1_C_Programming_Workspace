/* Question: Row and column sums
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    int r, c, a[100][100];
    scanf("%d %d", &r, &c);
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d", &a[i][j]);
    for (int i=0;i<r;i++) {
        int sum=0; for (int j=0;j<c;j++) sum+=a[i][j];
        printf("%d%s", sum, i==r-1?"\n":" ");
    }
    for (int j=0;j<c;j++) {
        int sum=0; for (int i=0;i<r;i++) sum+=a[i][j];
        printf("%d%s", sum, j==c-1?"":" ");
    }
    return 0;
}
