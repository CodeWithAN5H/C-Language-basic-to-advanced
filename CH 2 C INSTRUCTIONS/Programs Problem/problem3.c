// Consider a currency system in which there are notes of six denominations, namely,
// Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the
// keyboard, write a program to compute the smallest number of notes that will combine to give
// Rs. N.
// Author : Ansh Singh Date 30/08/2025

#include <stdio.h>

int main()
{
    int amount, noone, notwo, nofive, noten, nofifty, nohun, total;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    nohun = amount/100;
    amount = amount%100;

    nofifty = amount/50;
    amount = amount%50;

    noten = amount/10;
    amount = amount%10;

    nofive = amount/5;
    amount = amount%5;

    notwo = amount/2;
    amount = amount%2;

    noone = amount/1;
    amount = amount%1;

    total = nohun + nofifty + noten + nofive + notwo + noone;
    printf("%d", total);   

    return 0;
}