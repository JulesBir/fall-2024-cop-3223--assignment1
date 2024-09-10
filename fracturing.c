//Julian Bir
//UCF ID: 4793874
//8th September 2024
//Parra
//Assignment 1: Fracture

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//Used to get values of coordinates
double askForUserInput()
{
    double value;
    scanf("%lf", &value);

    return value;
}

//Calculates the distance(or diameter) with input
//Also iterates in other functions
double calculateDistance()
{
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    //equation for diameter of circle given two points
    double distance = sqrt((pow((x2-x1), 2)) + pow((y2-y1), 2));

    //Print statement for inputs
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);


    return distance;
}

//Isolates the print statement for the distance
void printDistance(double distance)
{
    printf ("The distance between the two points is %lf\n", distance);
}

//Calculates and prints circumference
double calculatePerimeter()
{
    double distance = calculateDistance();

    double radius = (distance/2);   //equation for radius of circle
    double perimeter = 2  * radius * PI;  //equation for circumference of circle

    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 2.0;
}

//Calculates and prints area of circle
double calculateArea()
{
    double distance = calculateDistance();
    double radius = (distance/2);   //equation for radius of circle
    double area = PI * pow(radius, 2); //equation for area of circle
    printf("The area of the city encompassed by your request is %lf\n", area);
    return 2.0;
}

//A circles height and width are the same at the maximum points
double calculateWidth()
{
    double distance = calculateDistance();
    double width = distance;

    printf("The width of the city encompassed by your request is %lf\n", width);

    return 2.0;
}

//A circles height and width are the same at the maximum points
double calculateHeight()
{
    double distance = calculateDistance();
    double height = distance;

    printf("The height of the city encompassed by your request is %lf\n", height);

    return 2.0;
}

//Main to call other functions
int main(int argc, char **argv)
{
    double distance = calculateDistance();
    printDistance(distance);
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}