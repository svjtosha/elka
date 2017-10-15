#include <stdio.h>
int main()
{
    int floor,stars,q,space,i,j;
    printf("enter floors: ");
    scanf("%d",&floor);

    for(i = 1; i <= floor; i++){
        space = floor - i;
        stars = i + (i - 1);

        for(q = 1; q <= space; q++){
            printf(" ");
        }

        for(j = 1;j <= stars; j++){
            printf("*");
        }

    printf("\n");
    }

    for(i = 0; i < floor - 1; i++){
        printf(" ");
    }
    printf("*");

    getch(); return 0;
}
