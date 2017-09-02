// Juan Perez
// 11-18-2016
// Lab 10



#define _CRT_SECURE_NO_DEPRECATE

#include <string.h>
#include <stdio.h>
#define SIZE 20

typedef struct{
 char petName[SIZE];
 char petType[SIZE];
 int pet_Age;
 double petWeight;

}pet;

//Function Prototypes

// fills the data fields of a pet instance
//returns the filled pet
pet Fillpet();

//fills the data fields of a pet instance
//by reference using a pointer to a pet
void FillpetPtr(pet *petptr);

//fills an array of pets
void FillpetArray(pet arrayP[], int *size);


//displays one pet
void Displaypet(pet anypet);

int main()
{

	//Declare variables
	pet mypet, mypet1, mypet2;
	pet manypets[SIZE];
	int pSize;
	int i;

	//Fill structures with a function
	mypet = Fillpet();
	mypet1 = Fillpet();

	//print using display function
	printf("\n---------Display mypet\n");
	Displaypet(mypet);
	printf("\n---------Display mypet1\n");
	Displaypet(mypet1);

	//Fill structure using pointers and dispay it
	FillpetPtr(&mypet2);
	printf("\n---------Display mypet2\n");
	Displaypet(mypet2);

	//Fill the array with the function
	printf("\n---------Fill array manypets\n");
	FillpetArray(manypets, &pSize);

	//display an array of pets
	printf("\n---------Display array manypets\n");
	for(i=0;i<pSize; i++)
	{
		Displaypet(manypets[i]);
	}

	return 0;
}

//Function Definitions


// fills the data fields of a pet instance
//returns the filled pet
pet Fillpet()
{
	//Declare local variables
	pet tempP;
	//prompt and get information
	printf("\nPlease enter the name of your pet:  ");
	scanf("%s", tempP.petName);
	//print to check
	printf("Pet Name:  %s\n", tempP.petName);

	//prompt and get information
	printf("\nPlease enter the type of your pet:  ");
	scanf("%s", tempP.petType);
	//print to check
	printf("Pet Type:  %s\n", tempP.petType);

	//prompt and get information
	printf("\nPlease enter the age of your pet:  ");
	scanf("%d", &tempP.pet_Age);
	printf("Pet Age:  %d\n", tempP.pet_Age);

	//prompt and get information
	printf("\nPlease enter the weight of your pet:  ");
	scanf("%lf", &tempP.petWeight);
	printf("Pet Weight:  %f\n", tempP.petWeight);

	return tempP;
}



//displays one pet
void Displaypet(pet anypet)
{
	printf("\n\nPet Name:  %s\n", anypet.petName);
	printf("Pet Type:  %s\n", anypet.petType);
	printf("Pet Age:  %d\n", anypet.pet_Age);
  printf("Pet Weight:  %f\n", anypet.petWeight);

}


//fills the data fields of a pet instance
//by reference using a pointer to a pet
void FillpetPtr(pet *petptr)
{
	//prompt and get information
	printf("\nPlease enter the name of your pet:  ");
	scanf("%s", (*petptr).petName);

	//prompt and get information
	printf("\nPlease enter the type of your pet:  ");
	scanf("%s", petptr->petType);

	//prompt and get information
	printf("\nPlease enter the age of your pet:  ");
	scanf("%d", &(*petptr).pet_Age);

	//prompt and get information
	printf("\nPlease enter the weight of your pet:  ");
	scanf("%lf", &(*petptr).petWeight);
}




//fills an array of pets
void FillpetArray(pet arrayP[], int *size)
{
	int i;
	//prompt the user
	printf("\nEnter the number of pets:  ");
	scanf("%d", size);

	//print to check
	printf("size:  %d\n", *size);

	for (i=0; i < *size; i++)
	{
		printf("enter petName:  ");
		scanf("%s", arrayP[i].petName);

		printf("enter petType:  ");
		scanf("%s", arrayP[i].petType);

		printf("enter pet age:  ");
		scanf("%d", &arrayP[i].pet_Age);

		printf("enter pet weight:  ");
		scanf("%lf", &arrayP[i].petWeight);
	}
}
