#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
 int floor = 0; //number of floors
 int i = 0;
 int j = 0;
 int y = 0;
 int k = 0;
 int z = 0;
 //ask the number of floors
 printf("enter floors: ");
 scanf("%d", &floor);
 j = floor;
     while(i<j)
    {
        while (y<=i)
            {
            printf("*");
            y++;
            }
            y = 0;
            printf("\n");
    i++;

    }
    printf("\n");
    i = 0;
    while(i<j)

    {
        y = j;
        while (y>i)
            {

            printf("*");
            y=y-1;
            }

            printf("\n");
    i++;

    }
    printf("\n");
    i = 0;
    k = j;
    k = 0;

 while (i <= floor - 1)
 {
  while (z < j - 1)
  {
   printf(" ");
   z++;
   }
  while (k < floor - z)
  {
   printf("*");
   k++;
  }
  k = 0;
  while (k < floor - z - 1)
  {
   printf("*");
   k++;
  }
  k = 0;
  printf("\n");
  j = j - 1;
  z = 0;
  i++;
 }
  i=0;
 while (i < floor - 1)
    {
    printf(" ");
    i++;
    }
    printf("*");

 getch();  return 0;
}
