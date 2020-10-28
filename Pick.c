#include<stdio.h>
#include<conio.h>
void main()
{
 printf("Pick an item: \n1. Pen\n2. Pencil\n3. Eraser\n4. Book");
 int choice=0;
 scanf("%d",&choice);
 {
  case 1: printf("You picked pen.");
  case 2: printf("You picked pencil.");
  case 3: printf("You picked Eraser.");
  case 4: printf("You picked Book.");
  default: printf("Invalid choice");
 }
}
