/* Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char letter = 'A',
        a[10][10] = {0};
    int i = 0,
        j = 0,
        up = 0,
        down = 0,
        left = 0,
        right = 0,
        move = 0;

    srand((unsigned) time(NULL));

    a[i][j] = letter++;

    while(letter <= 'Z'){
        up = down = left = right = move = 0;

        if(j + 1 < 10 && a[i][j + 1] == 0)
            up = 1;
        if(j - 1 >= 0 && a[i][j - 1] == 0)
            down = 1;
        if(i + 1 < 10 && a[i + 1][j] == 0)
            right = 1;
        if(i - 1 >= 0 && a[i -1][j] == 0)
            left = 1;

        if(up + down + left + right == 0)
            break;

        move = rand() % 4;

        switch(move){
            case 0:
                if(up){
                    a[i][++j] = letter++;
                    break;
                }
            case 1:
                if(down){
                    a[i][--j] = letter++;
                    break;
                }
            case 2:
                if(right){
                    a[++i][j] = letter++;
                    break;
                }
            case 3:
                if(left){
                    a[--i][j] = letter++;
                    break;

                }
            default:
                break;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if (a[i][j] == 0)
                a[i][j] = '.';
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}