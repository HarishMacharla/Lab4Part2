// /* Modify the repdigit.c program of section 8.1 so that it shows which digits were repeated: */

// #include <stdbool.h>
// #include <stdio.h>


// int main(void)
// {
//     bool digit_seen[10] = {false},
//         repeated[10] = {false};
//     int digit, i;
//     long n;

//     printf("Enter a number: ");
//     scanf("%ld", &n);

//     while (n > 0){
//         digit = n % 10;
//         if (digit_seen[digit])
//             repeated[digit] = true;
//         digit_seen[digit] = true;
//         n /= 10;
//     }
  
//     printf("Repeated digit(s) :");

//     for(i = 0; i < 10; i++){
//         if (repeated[i])
//             printf("%d ", i);
//     }

//     printf("\n");
    
//     return 0;
// }
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;


main()
{
  Bool digit_seen[10] = {0}, seen = FALSE;
  int digit;
  long int n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
    seen = TRUE;
    }

    digit_seen[digit] = TRUE;
    n /= 10;

    if (seen==TRUE){
    printf(" repeated digit\n\n");
        break;}
    else
    {
        printf("no Repeated digit \n\n");
    }
    

    scanf("%ld",&n);
  }

  
  return 0;
}