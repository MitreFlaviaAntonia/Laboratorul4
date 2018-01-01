#include <stdio.h>
#include <math.h>
#define PI 3.14

float y,somth,y2,a,b,c,d,n,value1,value2;
int x,i;

float firstpolinomial(float somth)
{
    int aux;

    aux=x;

    for(i=1;i<=2*n;i++)
        aux=aux*x;

    somth=a*aux+b*x*x+c*x+d;
    return somth;
}
float secondpolinomial(float y2)
{
    float r;
    r=cos(PI * c);
    y2=y;
    y2=a*x*x+b*x+r;
    return y2;
}
int main()
{
    printf("Give the values\n");
    printf("For x:");
    scanf("%d",&x);
    printf("For a:");
    scanf("%f",&a);
    printf("For b:");
    scanf("%f",&b);
    printf("For c:");
    scanf("%f",&c);
    printf("For d:");
    scanf("%f",&d);
    printf("For n:");
    scanf("%f",&n);
    somth=y;
    y2=y;
    value1=firstpolinomial(somth);
    printf("The value for the first polinomial=%f",value1);
    value2=secondpolinomial(y2);
    printf("The value for the second polinomial=%f",value2);

}
