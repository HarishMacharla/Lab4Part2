// /* Write a program that reverse the words in a sentence : */

// #include <stdio.h>

// #define MAX_VALUE 100

// int main(void) {

//     int i = 0,
//         j;
//     char c, 
//          terminating_char,
//          words[MAX_VALUE] = {0};

    
//     for (i = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++) {
//         if (c == '.' || c == '!' || c == '?') {
//             terminating_char = c;
//             break;
//         }
//         words[i] = c;
//     }

 
//     while (i >= 0 &&i<=100) {
//         while (words[--i] != ' ' && i != 0)
//             ;
//         j = i == 0 ? 0 : i + 1;
//         while (words[j] != ' ' && words[j] != '\0')
//             putchar(words[j++]);
//         if (i >= 0)
//             putchar(' ');
//     }

//     printf("\b%c\n", terminating_char);

//     return 0;
// }
#include <stdio.h>

#define TERMINUS (c = getchar()) != '\n' && c != '.' && c != '?' && c != '!'

int main(void)
{
	char sentence[200], c;
	int pos;

	for (int i = 0; TERMINUS; i++) {
		sentence[i] = c;
		pos = i;
	}

	
	for (int i = pos; i >= 0; i--) {
		int j;
		if (sentence[i] == ' ') {
			for (j = i + 1; sentence[j] != ' ' && j <= pos; j++) {
				printf("%c", sentence[j]);
			}
			printf(" ");
		} else if (i == 0) {
			for (j = i; sentence[j] != ' ' && j <= pos; j++) {
				printf("%c", sentence[j]);
			}
		}
	}

	printf("%c\n", c);

	return 0;
}