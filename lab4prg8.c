// /* Modify programming project 7 so that it prompts for five quiz grades for each of five students,
//     then computes the total score and average score foe each student, and the average score, high scoe and low score for each quiz:
// */

// #include<stdio.h>

// int main()
// {
//     int i, j, total, high, low;
//     int A[5][5];

//     for (i = 0; i < 5; i++){
//         printf("Enter quiz grades for student %d : ", i + 1);

//         for(j = 0; j < 5; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("\n");

//     for(i = 0; i < 5; i++){
//         printf("\nTotal and average score for student %d : ", i + 1);
//         total = 0;
//         for(j = 0; j < 5; j++){
//             total += A[i][j];
//         }
//         printf("%d %.2f", total, (double) total / 5);
//     }

//     printf("\n");
//     for(i = 0; i < 5; i++){
//         printf("\nAverage, high and low scores for quiz %d : ", i + 1);
//         total = 0;
//         high = low = A[0][i];

//         for(j = 0; j < 5; j++){
//             total += A[j][i];

//             if(A[j][i] < low)
//                 low = A[j][i];
//             if(A[j][i] > high)
//                 high = A[j][i];
//         }

//         printf("%.2f, %d, %d", (double) total/5, high, low);

//     }
//     printf("\n");

//     return 0;

// }

#include <stdio.h>

#define STUDENTS_AND_QUIZZES 5

int main(void)
{
    ​​​​​​​​
    int highest_grade = 0, lowest_grade = 100, student_num, quiz_num, square_matrix[STUDENTS_AND_QUIZZES][STUDENTS_AND_QUIZZES] = {​​​​​​​​0} ​​​​​​​​;
    double total_score = 0;
    for (student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
    {
        ​​​​​​​​
        //printf("Enter Student %d Quiz Grades: ", student_num+1);
        for (quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
            scanf("%d", &square_matrix[student_num][quiz_num]);
    }
    ​​​​​​​​

    //printf("\nStudent Data\n------------\n");
    for (student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
    {
        ​​​​​​​​
        for (quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
            total_score += square_matrix[student_num][quiz_num];
        printf("%.f ", total_score);
        total_score = 0;
    }
    ​​​​​​​​
    printf("\n");
    for (student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
    {
        ​​​​​​​​
        for (quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
            total_score += square_matrix[student_num][quiz_num];
        printf("%.2f ", total_score / STUDENTS_AND_QUIZZES);
        total_score = 0;
    }
    ​​​​​​​​
    printf("\n");

    total_score = 0;

    //printf("\nQuiz Data\n---------\n");
    for (quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
    {
        ​​​​​​​​

        for (student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
        {
            ​​​​​​​​
            total_score += square_matrix[student_num][quiz_num];
        }
        ​​​​​​​​
        printf("%.2f ",
               total_score / STUDENTS_AND_QUIZZES);

        total_score = 0;
        highest_grade = 0;
        lowest_grade = 100;
    }
    ​​​​​​​​
    printf("\n");
    for (quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
    {
        ​​​​​​​​

        for (student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
        {
            ​​​​​​​​
            if (square_matrix[student_num][quiz_num] > highest_grade)
                highest_grade = square_matrix[student_num][quiz_num];
        }
        ​​​​​​​​
        printf("%d ", highest_grade);
        total_score = 0;
        highest_grade = 0;
        lowest_grade = 100;
    }
    ​​​​​​​​
    printf("\n");

    for (quiz_num = 0; quiz_num < STUDENTS_AND_QUIZZES; quiz_num++)
    {
        ​​​​​​​​

        for (student_num = 0; student_num < STUDENTS_AND_QUIZZES; student_num++)
        {
            ​​​​​​​​
            if (square_matrix[student_num][quiz_num] < lowest_grade)
                lowest_grade = square_matrix[student_num][quiz_num];
        }
        ​​​​​​​​
        printf("%d ", lowest_grade);
        total_score = 0;
        highest_grade = 0;
        lowest_grade = 100;
    }
    ​​​​​​​​
    printf("\n");

    return0;
}
​​​​​​​​

​
