//  (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference and area. Use the constant value 3.14159 for π. Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.

#include <stdio.h>

int main()
{
    // Declare variables
    float radius, diameter, circumference, area;
    const float PI = 3.14159;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Display results
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
