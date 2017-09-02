//Juan Perez
//09-16-16
//lab3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetRadius();
int GetLength();
int GetWidth();


double AreaCir();
int AreaRect();


int main() {

  int radius = 0,
      sideLength = 0,
      sideWidth = 0,
      areaRect = 0;
  double areaCir = 0,
      pi = 3.14;

  radius = GetRadius();
  areaCir = AreaCir(radius);
  printf("The radius of the circle is %d, area of the circle is %f\n",radius,areaCir);
  sideWidth = GetWidth();
  sideLength = GetLength();
  areaRect = AreaRect(sideWidth, sideLength);
  printf("The width is %d, the length is %d, the area of the rectangle is %d\n",sideWidth,sideLength,areaRect);
  return 0;
}

int GetRadius() {
  int userinput = 0;
  printf("Enter the radius of the circle: ");
  scanf(" %d", &userinput);
  return userinput;
}

double AreaCir(int a, double b) {
  double pi = 3.14;
  return (a * pi);
}

int GetLength() {
  int userinput = 0;
  printf("Enter the width of the rectangle: ");
  scanf(" %d", &userinput);
  return userinput;
}

int GetWidth() {
  int userinput = 0;
  printf("Enter the length of the rectangle: ");
  scanf(" %d", &userinput);
  return userinput;
}

int AreaRect (int a, int b) {
  return (a*b);
}
