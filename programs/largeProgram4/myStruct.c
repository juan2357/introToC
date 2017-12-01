// Juan Perez
// 12-2-16
// Program 3

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define S 50


// type of structure
struct  catalog{
  char brand[S];
  char name[S];
  int id;
  int i;
  int qty;
  double cost;
  double price;
};
// function prototypes
//Displays first 5 entries
void displayEntry(struct catalog inventory[], int numentries);
//SAVE
void Save(struct catalog inventory[], int numentries);
// Displays Instructions
void Welcome();
//Menu tions
void Menu();
//gets user selection
char GetLetter();
//adds an entry from user
void AddNewEntry(struct catalog inventory[], int *numentries);
//deletes an entry from user
void DeleteEntry(struct catalog inventory[], int *numentries);
//clears entire file
void ClearCatalog();


int main(){
  // declared variables
  // int num[S];
  // struct catalog entry[S];
  int loc = 0;
  char input = '\0';
  struct catalog inventory[S];
  // displays welcome message
  Welcome();
  //Displays menu outptrtion for user
  Menu();

  do {
    switch (input = tolower(GetLetter())) {
      case 'p':
      // print entries
        displayEntry(inventory, loc+1);
      break;
      case 'a':
        AddNewEntry(&inventory[loc], &loc+1);
        printf("New entry added\n\n");
      break;
      case 'd':
        DeleteEntry(&inventory[loc], &loc+1);
        printf("You have successfully deleted and entry\n\n");
      break;
      case 's':
        Save(&inventory[loc], loc+1);
        printf("File successfully saved\n\n");
      break;
      case 'c':
        ClearCatalog();
        printf("The catalog is empty\n\n");
      break;
      // case 'u':
      //   UPdateEntry(&inventory[loc], loc+1);
      // break;
      case 'q':
        printf("Goodbye\n");
      break;
      default:
        Menu();
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
void Menu(){
  printf("Please select from the options below:\n");\
  printf("A - ADD a new entry\n");
  printf("D - DELETE an entry\n");
  printf("P - PRINT entire catalog\n");
  printf("S - SAVE the current catalog\n");
  printf("C - CLEAR entire catalog\n");
  printf("U - UPDATE item\n");
  printf("Q - QUIT\n");
  printf("Please make your selection: ");
}
char GetLetter(){
  char input = '\0';
  scanf("%c", &input);
  // if (input == 'q') {
  // }
  return input;
}
//Displays catalog entries
void displayEntry(struct catalog inventory[], int numentries){
  FILE* fptr;
  fptr = fopen("catalog.txt", "r");
  int loc = 0;
  int i;
  //just in case there no file
  if (!fptr) {
    printf("Unable to open file\n");
  }
  for (i = 0; i < numentries; i++) {
    fscanf(fptr,"Brand: %s\n", inventory[loc].brand);
    fscanf(fptr,"Name: %s\n", inventory->name);
    fscanf(fptr,"I.D.: %d\n", &inventory->id);
    fscanf(fptr,"QTY: %d\n", &inventory->qty);
    fscanf(fptr,"Cost: $%lf\n", &inventory->cost);
    fscanf(fptr,"Price: $%lf\n", &inventory->price);
    printf("\n---Catalog Entry---\n");
    printf("Brand: %s\n", inventory->brand);
    printf("Name: %s\n", inventory->name);
    printf("I.D.: %d\n", inventory->id);
    printf("QTY: %d\n", inventory->qty);
    printf("Cost: $%.2f\n", inventory->cost);
    printf("Price: $%.2f\n", inventory->price);
    loc++;
  }
  fclose(fptr);
}
//automatically saves to file
void Save(struct catalog inventory[], int numentries){
  FILE * fptr2;
  fptr2 = fopen("catalog.txt", "a");
  int i;
  int loc = '\0';
  for (i = 0; i < numentries; i++) {
    fprintf(fptr2,"Brand: %s\n", inventory[i].brand);
    fprintf(fptr2,"Name: %s\n", inventory[i].name);
    fprintf(fptr2,"I.D.: %d\n", inventory[i].id);
    fprintf(fptr2,"QTY: %d\n", inventory[i].qty);
    fprintf(fptr2,"Cost: %.2f\n", inventory[i].cost);
    fprintf(fptr2,"Price: %.2f\n", inventory[i].price);
    loc++;
  }
  fclose(fptr2);
}
//User to add a new entry to inventory
void AddNewEntry(struct catalog inventory[], int *numentries) {
  printf("Enter Brand: \n");
  scanf("%s", inventory[*numentries].brand);
  printf("Enter Name: \n");
  scanf("%s", inventory[*numentries].name);
  printf("Enter ID: \n");
  scanf("%d", &inventory[*numentries].id);
  printf("Enter QTY: \n");
  scanf("%d", &inventory[*numentries].qty);
  printf("Enter COST: \n");
  scanf("%lf", &inventory[*numentries].cost);
  printf("Enter Price: \n");
  scanf("%lf", &inventory[*numentries].price);
  (*numentries)++;
}
//deletes entry by ID
void DeleteEntry(struct catalog inventory[], int *numentries) {
  int id;
  int i;
  printf("Enter ID: ");
  scanf(" %d\n", &id);
  for (i=0; i<*numentries; i++) {
    if (inventory[i].id==id) {
      inventory[i] = inventory[*numentries-1];
      (*numentries)--;
    }
  }
}
//clears catalog
void ClearCatalog(){
  FILE *fptr3 = fopen("asdf.txt", "w");
  if (!fptr3)
  {
      perror("Could not open file");
  }
  fclose(fptr3);
}
