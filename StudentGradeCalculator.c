#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, total;
    float avg;

    printf(">>>>> STUDENT GRADE CALCULATOR <<<<<\n");

    printf("Enter marks for 5 subjects : \n");
    scanf("%i", &m1);
    scanf("%i", &m2);
    scanf("%i", &m3);
    scanf("%i", &m4);
    scanf("%i", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    avg = total/5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nAverage = %.2f", avg);

    
    if(avg >= 90)
        printf("\nGrade = A+");
    else if(avg >= 80)
        printf("\nGrade = A");
    else if(avg >= 70)
        printf("\nGrade = B");
    else if(avg >= 60)
        printf("\nGrade = C");
    else if(avg >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");
    

    if(avg >= 50)
        printf("\nResult = PASS");
    else
        printf("\nResult = FAIL");

    return 0;

}