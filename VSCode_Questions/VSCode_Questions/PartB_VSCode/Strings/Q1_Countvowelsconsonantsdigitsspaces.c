/* Question: Count vowels, consonants, digits, spaces
 * Complete standalone solution.
 */

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000];
    int vowels=0, consonants=0, digits=0, spaces=0;
    fgets(s, sizeof(s), stdin);

    for (int i=0; s[i]!='\0'; i++) {
        char ch = (char)tolower((unsigned char)s[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
        else if (ch>='a'&&ch<='z') consonants++;
        else if (isdigit((unsigned char)ch)) digits++;
        else if (ch==' ') spaces++;
    }
    printf("%d %d %d %d", vowels, consonants, digits, spaces);
    return 0;
}
