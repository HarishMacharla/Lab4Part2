/* Programming project 15 */

#include <stdio.h>

#define MAX_VALUE 80

int main(void) {

    char c, sentence[MAX_VALUE] = {0};

    int i, n, length;

    for (i = 0, length = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++) {
        length++;
        sentence[i] = c;
    }

    scanf("%d", &n);

    for (i = 0; i < length; i++) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
            sentence[i] = ((sentence[i] - 'A') + n) % 26 + 'A';
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
            sentence[i] = ((sentence[i] - 'a') + n) % 26 + 'a';
        
        putchar(sentence[i]);
    }
    printf("\n");

    return 0;
}

