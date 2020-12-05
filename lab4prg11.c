// #include<stdio.h>

// int main(void) {

//     char phone[15] = {0};
//     int i = 0;

//     while ((phone[i++] = getchar()) != '\n')
//         ;

//     for (i=1;i<=15;i++) {
//         switch (phone[i]) {
//             case 'A': case 'B': case 'C':
//                 putchar('2');
//                 break;
//             case 'D': case 'E': case 'F':
//                 putchar('3');
//                 break;
//             case 'G': case 'H': case 'I':
//                 putchar('4');
//                 break;
//             case 'J': case 'K': case 'L':
//                 putchar('5');
//                 break;
//             case 'M': case 'N': case 'O':
//                 putchar('6');
//                 break;
//             case 'P': case 'R': case 'S':
//                 putchar('7');
//                 break;
//             case 'T': case 'U': case 'V':
//                 putchar('8');
//                 break;
//             case 'W': case 'X': case 'Y':
//                 putchar('9');
//                 break;
//             default:
//                 putchar(phone[i]);
//                 break;
//         }
//     }
//     printf("\n");
//     return 0;
// }
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
}
