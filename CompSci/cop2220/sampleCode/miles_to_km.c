/* 
Name: Monika Rathod
Course: COP 2220
Description: Converts distances from miles to kilometers 
*/ 

#define _CRT_SECURE_NO_WARNINGS    //to avoid scanf warning or error
#include <stdio.h>	    	   //printf, scanf definitions  
#define KMS_PER_MILE 1.609  	   //conversion constant

int main(void) 
{ 

	//declarations
	double miles;  //distance in miles
        double kms;    //equivalent distance in kilometers 

	//function body
	/* Get the distance in miles. */ 
	printf("Enter the distance in miles> "); 
	scanf("%lf", &miles); 

	/* Convert the distance to kilometers. */ 
	kms = KMS_PER_MILE * miles; 

	/* Display the distance in kilometers. */ 
	printf("That equals %f kilometers.\n", kms); 

	return (0); 
} 
