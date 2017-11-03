//Juan Perez
//11-6-2017
//Arrays and File Processing

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdio.h>
//get num from user
int GetNum(int num);

int main() {

  int arrNum[SIZE];
  int num;

  num = GetNum();

  printf("%d\n", num);

  return 0;

}

GetNum(int num){

  int num;

  printf("Please enter an integer: ");
  scanf("%d\n", &num);
  return num;
}
