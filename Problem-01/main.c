#include "conio.h"
#include <stdio.h>

char pHolderName[10]; //name of ther person
char gender[1];       //gender M/F
int* age;              //age
char locality[10];          //city or village

void init()
{
    printf("Hello, Weclome! \n \n");
    printf("Employee Data Handler \n");
    printf("made it for Windy \n");
    printf("\n \n");
}

void scanData()
{
    printf("\n Enter Name: ");
    scanf("%s", pHolderName); 
    printf("\n Enter Age: ");
    scanf("%d", age);
    printf("Enter Genter(M/F): ");
    scanf("%s", gender);
    printf("Enter Locality(City/Village): ");
    scanf("%s", locality); 
}

int main()
{
    init(); 
    
    printf("Enter Data: ");

    scanData(); 

    return 0; 
}
