/* Modify programming project 11 from chapter 7 so that the program labels its output : */

#include <stdio.h>

int main(void) {

    int i;
    char c, initial, last[20] = {0};

    
    while ((c = getchar()) == ' ')
        ;
    initial = c;
    while ((getchar() != ' '))
        ;
    for (i = 0; (c = getchar()) != '\n'; i++)
        last[i] = c;

    
    for (i = 0; last[i] != '\0'; i++)
        putchar(last[i]);
    printf(", %c.\n", initial);

    return 0;
}
