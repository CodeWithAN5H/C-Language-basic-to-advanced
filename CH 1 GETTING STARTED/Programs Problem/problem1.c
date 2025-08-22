/* Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance 
is 20% of basic salary. Write a program to calculate his gross salary. */
/* Author : Ansh Singh  Date : 22/08/2025 */

// gross salary = basic salary + allowances
// basic salary = fixed part of salary
// net = gross - deductions(tax, insurance etc)


# include <stdio.h>

int main()
{
    float basic_salary, house_rent, dearness, gross_salary;

    printf("Enter your basic salary: ");
    scanf("%f", &basic_salary);
    
    dearness = (40/100.0)*basic_salary;
    house_rent = (20/100.0)*basic_salary;
    
    gross_salary = basic_salary + dearness + house_rent;
    
    printf("Basic salary of Ramesh = %f\n", basic_salary);
    printf("Dearness Allowance = %f\n", dearness);
    printf("House Rent Allowance = %f\n", house_rent);
    printf("Gross Pay of Ramesh is = %f\n", gross_salary);
    return 0;
}