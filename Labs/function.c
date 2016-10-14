//Juan Perez
//09-23-16
//lab4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function declaration
//takes a variable from user and displays the product of user input and pi
double CalculateAreaCir(int radius);
//take two variables from user and displays the product of the two variables
int CalculateAreaRect(int length, int width);
//main function that prompts user for radius, length, width and displays
//calculation for area of a circle and rectangle respectively
int main() {
  int radius = 0,
      length = 0,
      width = 0,
      areaRect = 0;
  double areaCir = 0;
  //prompts user input once to be used to calculate area of a circle
  printf("Enter the radius of the circle: \n");
  scanf(" %d", &radius);
  //function call for area of circle
  areaCir = CalculateAreaCir(radius);
  //displays product of user input and pi calculated for the area of a circle
  printf("The radius of the circle is %d, area of the circle is: %f\n",radius, areaCir);
  //prompts user input twice to be used to calculate area of a rectangle
  printf("Enter the length of the rectangle: \n");
  scanf(" %d", &length);
  printf("Enter the length of the rectangle: \n");
  scanf(" %d", &width);
  //function call for area of a rectangle
  areaRect = CalculateAreaRect(length, width);
  //displays pruduct of two user inputs for the area of a rectangle
  printf("The width is %d, the length is %d, the area of the rectangle is %d\n",length ,width, areaRect);
  return 0;
}
//function definition
//takes one variable and display the product
double CalculateAreaCir(int radius) {
  double pi = 3.14;
  return radius * pi;
}
//takes two variables and displays the product
int CalculateAreaRect (int length, int width) {
  return (length * width);
}
