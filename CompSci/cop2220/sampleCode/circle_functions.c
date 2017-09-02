/* Area and Circumference of a Circle using Functions */
#define _CRT_SECURE_NO_WARNINGS		// to avoid scanf warning or error
#include <stdio.h>			// printf definition 
#include <math.h>
#define PI 3.14159			//constant

//funtion prototypes
double getCircumference(double radius);
double getArea(double radius);

int main(void)
{

	double radius; 	//input - radius of a circle 
	double area; 	//output - area of a circle 
	double circum; 	//output - circumference


	/* Get the circle radius */
	printf("Enter radius> ");
	scanf("%lf", &radius);

	/* Calculate the area */
	area = getArea(radius);

	/* Calculate the circumference */
	circum = getCircumference(radius);

	/* Display the area and circumference */
	printf("The area is %.4f\n", area);
	printf("The circumference is %.4f\n", circum);

	return (0);
}

double getCircumference(double radius)
{
	return (2 * PI * radius);
}

double getArea(double radius)
{
	return (PI * pow(radius, 2));   //include math.h as a precompiler directive
}