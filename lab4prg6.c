// #include <stdio.h>
// #include <ctype.h>

// #define MAX_SIZE 10000

// int main(void)
// {
//     char c, message[MAX_SIZE] = {0};
//     int i = 0;


//     while ((c = getchar()) != '\n' && i < MAX_SIZE)
//         message[i++] = c;

    

//     for(i = 0; i < MAX_SIZE; i++){
//         switch (c = toupper(message[i])){
//             case 'A':
//                 putchar('4');
//                 break;
//             case 'B':
//                 putchar('8');
//                 break;
//             case 'E':
//                 putchar('3');
//                 break;
//             case 'I':
//                 putchar('1');
//                 break;
//             case 'O':
//                 putchar('0');
//                 break;
//             case 'S':
//                 putchar('5');
//                 break;
//             default:
//                 putchar(c);
//                 break;

//         }
//     }
//     printf("!!!!!!!!!!\n");

//     return 0;
// }
#include <stdio.h>

#define N 16

int main(void)
{
	char c, phone[N];

	int i;


	for (i = 0; (c = getchar()) != '\n'; i++) {
		phone[i] = c;
	}
	phone[i] = '\n';

	
	for (i = 0; phone[i] != '\n'; i++) {
		switch (phone[i]) {
		case 'A':
		case 'B':
		case 'C':
			printf("2");
			break;
		case 'D':
		case 'E':
		case 'F':
			printf("3");
			break;
		case 'G':
		case 'H':
		case 'I':
			printf("4");
			break;
		case 'J':
		case 'K':
		case 'L':
			printf("5");
			break;
		case 'M':
		case 'N':
		case 'O':
			printf("6");
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			printf("7");
			break;
		case 'T':
		case 'U':
		case 'V':
			printf("8");
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			printf("9");
			break;
		default:
			printf("%c", phone[i]);
			break;
		}
	}
	printf("\n");

	return 0;
}