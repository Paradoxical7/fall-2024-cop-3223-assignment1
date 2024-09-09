//Takrim Nahin
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function that calls other functions
int main(int argc, char **argv) {
    //calculate the distance and use it for other function
    double distance = calculateDistance();
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);
    return 0;
}

// Function to calculate the distance of a circle
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a circle
double calculatePerimeter(double distance) {
    double perimeter = 2 * PI * (distance / 2);
    printf("The perimeter of the circle is %.2lf\n", perimeter);
    return 3.5;
}

// Function to calculate the area of a circle
double calculateArea(double distance) {
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the circle is %.2lf\n", area);
    return 2.0;
}

// Function to calculate the width of the circle
double calculateWidth(double distance) {
    printf("The width of the circle is %.2lf\n", distance);
    return 1.0;
}

// Function to calculate the height of the circle
double calculateHeight(double distance) {
    printf("The height of the circle is %.2lf\n", distance);
    return 1.0;
}
