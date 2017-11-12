#include<stdio.h>

int sum(int x, int y, int z)
{

        int sum=0;
        sum=x+y+z;
        return sum;

}

int product(int x, int y, int z)
{

        int prod=1;
        prod=x*y*z;
        return prod;

}

float average(int x, int y, int z)
{

        float sum=0;
        float avg;
        sum=x+y+z;
        avg=sum/3;
        return avg;

}


int main()
{
        int a,b,c,suma,produs;
        float mediaaritmetica;


            printf("Give the value for a: ");
            scanf("%d",&a);

            printf("\nGive the value for b: ");
            scanf("%d",&b);

            printf("\nGive the value for c: ");
            scanf("%d",&c);


                suma=sum(a,b,c);

                    printf("\nThe sum of the numbers is: ");
                    printf("%d",suma);


                produs=product(a,b,c);

                    printf("\nThe product of the numbers is: ");
                    printf("%d",produs);


                mediaaritmetica=average(a,b,c);

                    printf("\nThe average of the numbers is: ");
                    printf("%f",mediaaritmetica);

}
