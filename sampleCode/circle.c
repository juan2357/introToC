/* Calculates and displays the area and circumference of a circle */ 

#define _CRT_SECURE_NO_WARNINGS    //to avoid scanf warning or error
#include <stdio.h>	    	   //printf, scanf definitions  
#define PI 3.14159		   //constant

int main(void) 
{ 

		double radius; 	//input - radius of a circle 
		double area; 	//output - area of a circle 
		double circum;  //output - circumference
        

		/* Get the circle radius */ 
		printf("Enter radius> "); 
		scanf("%lf", &radius);
		
		/* Calculate the area */ 
		area = PI * radius * radius;

		/* Calculate the circumference */ 
		circum = 2 * PI * radius;

		/* Display the area and circumference */ 
		printf("The area is %.4f\n", area); 
		printf("The circumference is %.4f\n", circum);

		return (0); 
} 