/* Write a program that reads a 5 x 5 array of integers and then prints the row sums and the column sums: */

#include <stdio.h>
#define n 5

int main()
{
    int i, j, total;
    int A[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");

    for(i = 0; i < n; i++){
        total = 0;
        for(j = 0; j < n; j++){
            total += A[i][j];
        }
        printf("%d ", total);
    }
    printf("\n");
    for(i = 0; i < n; i++){
        total = 0;
        for(j = 0; j < n; j++){
            total += A[j][i];
        }
        printf("%d ", total);
    }

    printf("\n");
    return 0;
}