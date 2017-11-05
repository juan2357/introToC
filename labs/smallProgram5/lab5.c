//Juan Perez
//11-6-2017
//Arrays and File Processing

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdio.h>
//get num from user
int GetNum();




int main() {

  int arrNum[SIZE];
  int num = 0;
  FILE * ptr;
  ptr = fopen("numInput.txt", "r");

  num = GetNum();
  /*Use a loop to read the integers into the array
  from the input file (fscanf)*/
  for (int i = 0; i < num; i++) {
    fscanf(ptr, "%d", &arrNum[i]);
    printf("Number is: %d\n\n", arrNum[i]);
  }


  fclose(ptr);
  return 0;

}

int GetNum(){

  int num;

  printf("Please enter an integer: ");
  scanf("%d", &num);
  printf("%d\n", num);//for testing
  return num;
}
