//Juan Perez
//11-6-2017
//Arrays and File Processing

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdio.h>
//get num from user
int GetNum();
// Use a loop to add up all the items in the array and store the sum.
int SumOfArray(int arrNum[], int num);

int main() {

  int arrNum[SIZE];
  int num;
  int sum;
  FILE * readPtr;
  FILE * writePtr;
  readPtr = fopen("numInput.txt", "r");
  writePtr = fopen("resOut.txt", "w");

  num = GetNum();
  //Use a loop to read the integers into the
  //array from the input file (fscanf)
  for (int i = 0; i < num; i++) {
    fscanf(readPtr, "%d", &arrNum[i]);
    // Use a loop to print the array onto the screen in a column
    printf("Number is: %d\n\n", arrNum[i]);
  }
  sum = SumOfArray(arrNum, num);
  //printing the sum of the array.
  printf("The sum of the numbers in the array is: %d\n\n", sum);
  // write the sum to the resOut.txt
  fprintf(writePtr, "%d\n", sum);

  fclose(readPtr);
  fclose(writePtr);
  return 0;

}

int GetNum(){
  int num;
  printf("Please enter an integer: ");
  scanf("%d", &num);
  return num;
}
// Use a loop to add up all the items in the array and store the sum.
int SumOfArray(int arrNum[], int num){
  int sum;
  for (int i = 0; i < num; i++) {
    sum += arrNum[i];
  }
  return sum;
}
