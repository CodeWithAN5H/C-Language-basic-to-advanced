// If a five-digit no is input through the keyboard, write a program to reverse the number.
// Author : Ansh Singh  Date : 30/08/2025
// Repeat this question!!


#include <stdio.h>

int main()
{
    int n, d5, d4, d3, d2, d1;
    long int rev_no;
    
    printf("Enter the 5-digit no (less than 32767): ");
    scanf("%d", &n);

    d5 = n%10;
    n = n/10;
    d4 = n%10;
    n =  n/10;
    d3 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d1 = n%10;
    rev_no = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    printf("%d", rev_no);

    return 0;
}