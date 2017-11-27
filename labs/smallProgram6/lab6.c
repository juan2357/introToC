//Juan Perez
//11-27-2017
//Small Program 6

#define _CRT_SECURE_NO_WARNINGS


 #include <string.h>
 #include <stdio.h>
 #define SIZE 20
 //user defined structure for playing card
 typedef struct{
   char className[SIZE],
        intructor[SIZE];
   int credits;
   double points;
   char letterGrade;
 }course;
