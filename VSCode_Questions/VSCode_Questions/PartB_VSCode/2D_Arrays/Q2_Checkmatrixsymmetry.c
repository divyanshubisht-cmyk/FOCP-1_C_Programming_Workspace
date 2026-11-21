/* Question: Check matrix symmetry
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    int n, a[100][100], symmetric=1;
    scanf("%d", &n);
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf("%d", &a[i][j]);
    for (int i=0;i<n;i++) for (int j=i+1;j<n;j++)
        if (a[i][j] != a[j][i]) symmetric=0;
    printf(symmetric ? "YES" : "NO");
    return 0;
}
