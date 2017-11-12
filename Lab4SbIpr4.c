#include<stdio.h>

void interchange(int *a, int *b)
{

    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;

}

int main()
{

    int x,y;

        printf("Give the value for x: ");
        scanf("%d",&x);

        printf("\nGive the value for y: ");
        scanf("%d",&y);


            interchange(&x,&y);


                printf("The numbers after interchange: ");
                printf("\nx=");
                printf("%d",x);
                printf("\ny=");
                printf("%d",y);

}

