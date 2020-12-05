/* Modify the repdigit.c program of section 8.1 so that it prints  table showing how many times 
    each digit appears in the number :
*/

#include <stdio.h>


int main(void)
{
    
    int digit, i, occurrences[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        occurrences[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
    printf("occurrences :\t");

    for(i = 0; i < 10; i++){
        
            printf("%2d ", occurrences[i]);
    }

    printf("\n");
    
    return 0;
}
