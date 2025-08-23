/* If the marks obtained by a student in five different subjects are input through keyboard, write a program to find out the aggregate marks and percentage marks obtained
by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100. */
/* Author : Ansh Singh  Date : 23/08/2025 */

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, aggr;
    float percentage;

    printf("Enter marks of 5 subjects : ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    aggr = m1 + m2 + m3 + m4 + m5;
    percentage = aggr/5;

    printf("Aggregate marks = %d\nPercentage = %f", aggr, percentage);
    
    return 0;
}