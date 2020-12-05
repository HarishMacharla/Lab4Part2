// /* Modify the repdigit.c program of section 8.1 so that user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0. */

// #include <stdio.h>


// int main(void)
// {
    
//     int digit, i, occurrences[10] = {0};
//     long n;

//     printf("Enter a number: ");
//     scanf("%ld", &n);

//     if (n <= 0){
//         printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
//         printf("occurrences :\t 0  0  0  0  0  0  0  0  0  0\n");    
//     }

//     while (n > 0){
//         while (n > 0){
//             digit = n % 10;
//             occurrences[digit]++;
//             n /= 10;
//         }

//         printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
//         printf("occurrences :\t");

//         for(i = 0; i < 10; i++){
//             printf("%2d ", occurrences[i]);
//             occurrences[i] = 0;
//         }

//         printf("\nEnter a number : ");
//         scanf("%ld", &n);
//     }
    
    
    
    
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_DIGITS 10
int main(void)
{
	int digit_seen[NUMBER_OF_DIGITS] = {0};
	int digit;
	int n;

	while(true)
	{

		//printf("Enter a number: ");
		scanf("%d", &n);

		if(n <= 0)
			break;

		while(n > 0)
		{
			digit = n % 10;
			if(digit_seen[digit]==2)
				break;
			digit_seen[digit] = digit_seen[digit]+1;
			n /= 10;
	
	    }
	}
    if(digit_seen[digit] > 1)
			printf("Repeated Digit\n");
         
	else
		printf("No repeated digit\n");
	printf("\n");

	return 0;
}