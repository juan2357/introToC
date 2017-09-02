// Juan Perez
// 12-2-16
// Program 3

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

// type of structure
struct Catalog {
  char brand[SIZE], name[SIZE];
  int id, qty;
  double cost, price;
};
// function prototypes
// Displays Instructions
void Welcome();
//Menu options
char Menu();
//Displays first 5 entries
void displayEntry(struct Catalog entry);
//adds and entry from user
void AddNewEntry(struct Catalog entry);


int main(){
  // declared variables
  struct Catalog Entry1;
  struct Catalog Entry2;
  struct Catalog Entry3;
  struct Catalog Entry4;
  struct Catalog Entry5;

  //Catalog entries
  strcpy(Entry1.brand, "Globe");
  strcpy(Entry1.name, "Sabaton");
  Entry1.id = 101;
  Entry1.qty = 45;
  Entry1.cost = 30.00;
  Entry1.price = 65.99;

  strcpy(Entry2.brand, "Globe");
  strcpy(Entry2.name, "Sabaton");
  Entry2.id = 101;
  Entry2.qty = 45;
  Entry2.cost = 30.00;
  Entry2.price = 65.99;

  strcpy(Entry3.brand, "Globe");
  strcpy(Entry3.name, "Sabaton");
  Entry3.id = 101;
  Entry3.qty = 45;
  Entry3.cost = 30.00;
  Entry3.price = 65.99;

  strcpy(Entry4.brand, "Globe");
  strcpy(Entry4.name, "Sabaton");
  Entry4.id = 101;
  Entry4.qty = 45;
  Entry4.cost = 30.00;
  Entry4.price = 65.99;

  strcpy(Entry5.brand, "Globe");
  strcpy(Entry5.name, "Sabaton");
  Entry5.id = 101;
  Entry5.qty = 45;
  Entry5.cost = 30.00;
  Entry5.price = 65.99;

  // Welcome message and display of intructions
  Welcome();

  //Displays menu option for user
  do {
    input = tolower(Menu());
    struct Catalog entry;
    switch (input) {
      case 'p':
      // print entries
      displayEntry(Entry1);
      displayEntry(Entry2);
      displayEntry(Entry3);
      displayEntry(Entry4);
      displayEntry(Entry5);
      break;
      case 'a':

      printf("Enter Brand: \n");
      scanf("%s", entry.brand);

      printf("Enter Name: \n");
      scanf("%s", entry.name);

      printf("Enter ID: \n");
      scanf("%d", &entry.id);

      printf("Enter QTY: \n");
      scanf("%d", &entry.qty);

      printf("Enter COST: \n");
      scanf("%lf", &entry.cost);

      printf("Enter Price: \n");
      scanf("%lf", &entry.price);
      AddNewEntry(entry);
      break;
    }

  }
  while (input != 'q');
  return 0;
}
// Function definitions
// Displays intructions to user
void Welcome(){
  printf("Hello and welcome\n");
  printf("This program helps you create and inventory for skate shoes\n");
  printf("To get you started, 5 shoes have already been entered.\n\n");
}
//Display user Menu
char Menu(){
  char input = '\0';
  printf("Please select from the options below:\n");\
  printf("A - ADD a new entry\n");
  printf("D - DELETE an entry\n");
  printf("P - PRINT entire catalog\n");
  printf("S - SAVE the current catalog\n");
  printf("C - CLEAR entire catalog\n");
  printf("U - UPDATE item\n");
  printf("Q - QUIT\n");
  printf("Please make your selection: ");
  scanf("%c", &input);
  return input;
}
//Displays catalog entries
void displayEntry(struct Catalog entry){
  printf("\n---Catalog Entry---\n");
  printf("Brand: %s\n", entry.brand);
  printf("Name: %s\n", entry.name);
  printf("I.D.: %d\n", entry.id);
  printf("QTY: %d\n", entry.qty);
  printf("Cost: %.2f\n", entry.cost);
  printf("Price: %.2f\n", entry.price);
}
void AddNewEntry(struct Catalog entry) {


}
