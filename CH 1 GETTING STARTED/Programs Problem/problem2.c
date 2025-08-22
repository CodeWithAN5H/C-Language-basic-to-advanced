/* The distance between two cities (in kilometers) is input through the keyboard. Write a program to convert and print this
distance in meters, feet, inches and centimeters. */
/* Author : Ansh Singh  Date - 22/08/2025 */

// In 1 kilometer:
// Meters: 1,000 meters
// Centimeters: 100,000 centimeters
// Feet: 3,280.84 feet
// Inches: 39,370.08 inches

#include <stdio.h>

int main()
{
    float distance_btw_cities_in_km, m, cm, feet, inches;
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &distance_btw_cities_in_km);
    
    m = distance_btw_cities_in_km*1000;
    cm = distance_btw_cities_in_km*100000;
    feet = distance_btw_cities_in_km*3280.84;
    inches = distance_btw_cities_in_km*39370.08;

    printf("Distance in meters = %f\n", m);
    printf("Distance in centimeters = %f\n", cm);
    printf("Distance in feet = %f\n", feet);
    printf("Distance in inches = %f\n", inches);
}