/* Programming project 16 */

#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */

int main(void) {

    int i,
        same = 1,
        letters[26] = {0};
    char c;
    int a=1,b=0;

    
    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            letters[toupper(c) - 'A']++;
    }
    
    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            letters[toupper(c) - 'A']--;
    }

    for (i = 0; i < 26; i++) {
        if (letters[i] != 0) {
            same = 0;
            break;
        }
    }
    if (same) {
        printf("%d\n",a);
        return 0;
    }
    printf("%d\n",b);
    return 0;
}
