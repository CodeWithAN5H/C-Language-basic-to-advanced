// If the lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle
// Author : Ansh Singh Date : 30/08/2025

// Area of triangle = root of (s (s-a)(s-b)(s-c))
// s = (a+b+c)/2

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c, sp, area;
    printf("Enter sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    sp = (a+b+c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of triangle is: %f", area);
    return 0;
}