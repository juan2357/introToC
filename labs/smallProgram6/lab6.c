//Juan Perez
//11-27-2017
//Small Program 6

#define _CRT_SECURE_NO_WARNINGS


 #include <string.h>
 #include <stdio.h>
 #define SIZE 20
 //user defined structure for playing course
 typedef struct{
   char className[SIZE],
        instructor[SIZE];
   int credits;
   double points;
   char letterGrade;
 }course;
 //For the array of courses use the variable myCourses
 //Functions Prototypes
 //fills the data fields of a course instance
 //returns the filled course
 course FillCourse();
 //fills the data fields of a course instance
 //by reference using a pointer to a course
 void FillCoursePtr(course *coursePtr);
 //fills an array of courses
 void FillCourseArray(course arrayC[], int *size);
  //displays one course
 void DisplayCourse(course anyCourse);

int main() {

  //Variable Declariations
  course myCourse,
         myCourse1,
         myCourse2;
  course myCourses[SIZE];
  int cSize;
  int i;

  //Fill structures with a function
  myCourse = FillCourse();
  myCourse1 = FillCourse();

  //print using display function
  printf("\n----------Display myCourse\n");
  DisplayCourse(myCourse);
  printf("\n----------Display myCourse1\n");
  DisplayCourse(myCourse1);
  //Fill structure using pointers and display it
  FillCoursePtr(&myCourse2);

  printf("\n----------Display myCourse2\n");
  DisplayCourse(myCourse2);
  //Fill the array with the function
  printf("\n----------Fill array myCourses\n");
  FillCourseArray(myCourses, &cSize);

  //display an array of myCourses
  printf("\n----------Display array of myCourses\n");
  for (i = 0; i < cSize; i++) {
    DisplayCourse(myCourses[i]);
  }
  return 0;
}
//Function Definitions

//fills the data fields of a course instance
//returns the filled course
course FillCourse(){
  //declare local variable
  course tempC;
  //prompt and get info from course
  printf("\nPLease enter the name of the class:  ");
  scanf("%s", tempC.className);
  //print to check
  printf("face: %s\n", tempC.className);

  printf("\nPLease enter the name of instructor:  ");
  scanf(" %s", tempC.instructor);
  //print to check
  printf("face: %s\n", tempC.instructor);

  printf("\nPLease enter the number of credits:  ");
  scanf(" %d", &tempC.credits);
  //print to check
  printf("face: %d\n", tempC.credits);

  printf("\nPLease enter the number of points:  ");
  scanf(" %lf", &tempC.points);
  //print to check
  printf("face: %lf\n", tempC.points);

  printf("\nPLease enter the letter grade:  ");
  scanf(" %c", &tempC.letterGrade);
  //print to check
  printf("face: %c\n", tempC.letterGrade);
  return tempC;
}
//displays one course
void DisplayCourse(course anyCourse){
  printf("\n\n: %s\n", anyCourse.className);
  printf("\n\n: %s\n", anyCourse.instructor);
  printf("\n\n: %d\n", anyCourse.credits);
  printf("\n\n: %f\n", anyCourse.points);
  printf("\n\n: %c\n", anyCourse.letterGrade);
}
//fills the data fields of a course instance
//by reference using a pointer to a course
void FillCoursePtr(course *coursePtr){
  printf("\nPLease enter the name of class:  ");
  scanf(" %s", (*coursePtr).className);

  printf("\nPLease enter the name of the instructor:  ");
  scanf(" %s", (*coursePtr).instructor);

  printf("\nPLease enter the number of credits:  ");
  scanf(" %d", &(*coursePtr).credits);

  printf("\nPLease enter the number of ponts:  ");
  scanf(" %lf", &(*coursePtr).points);

  printf("\nPLease enter the letter grade:  ");
  scanf(" %s", &(*coursePtr).letterGrade);
}
//fills an array of courses
void FillCourseArray(course arrayC[], int *size){
  int i;
  //prompt user
  printf("\nEnter the number of courses:  ");
  scanf(" %d", size);
  //print to check
  printf("size: %d\n", *size);
  for (i = 0; i < *size; i++) {
    printf("Enter class name: ");
    scanf(" %s", arrayC[i].className);

    printf("enter instructor: ");
    scanf(" %s", arrayC[i].instructor);

    printf("enter credits: ");
    scanf(" %d", &arrayC[i].credits);

    printf("enter points: ");
    scanf(" %lf", &arrayC[i].points);

    printf("enter letter grade: ");
    scanf(" %s", &arrayC[i].letterGrade);
  }
}
