/* Question: Count local peaks
 * Complete standalone solution.
 */

#include <stdio.h>
int main(void) {
    int r,c,a[100][100],count=0;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) {
        int peak=1;
        if(i>0 && a[i][j]<=a[i-1][j]) peak=0;
        if(i<r-1 && a[i][j]<=a[i+1][j]) peak=0;
        if(j>0 && a[i][j]<=a[i][j-1]) peak=0;
        if(j<c-1 && a[i][j]<=a[i][j+1]) peak=0;
        if(peak) count++;
    }
    printf("%d",count);
    return 0;
}
