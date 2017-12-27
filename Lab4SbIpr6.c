#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int cathet1;
int cathet2;
int hypotenuse1;
int hypotenuse2=0;
int x;
int y;

int hypotenuse_method1(int cathet1,int cathet2)
{
    hypotenuse1=sqrt(cathet1*cathet1+cathet2*cathet2);
    return hypotenuse1;
}

void hypothenuse_method2(int cathet1,int cathet2,int *hypotenuse2)
{
    *hypotenuse2=sqrt(cathet1*cathet1+cathet2*cathet2);

}

int main()
{
    printf ( "Give the value for the first cathet : \n" );
    scanf ( "%d", &cathet1 );

    printf ( "Give the value for the second cathet : \n" );
    scanf ( "%d", &cathet2 );

    x=hypotenuse_method1(cathet1,cathet2);
    printf("The hypotenuse computed by the first method is: %d\n",x);

    hypothenuse_method2(cathet1,cathet2,&hypotenuse2);
    printf("The hypotenuse computed by the second method is: %d",hypotenuse2);

    return 0;
}
