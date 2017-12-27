#include<stdio.h>
#include<string.h>

void permutation(int *v, int nr)
{
    int i;
    for(i=0;i<nr;i++)
    printf("%d ",v[i]);
    printf("\n");
}
int main()
{
    int v[10];
    int *ptr;
    int aux;
    int i, j, n, y;
    int nr=0;

    printf("The integer given by you: ");
    scanf("%d", &n);

    y=n;

    while(y!=0)
    {
        y=y/10;
        nr=nr+1;
    }

    y=n;

    for (i=0;i<nr;i++)
       {
        v[i]=y%10;
        y=y/10;
       }
    for (j=1;j<=nr;j++) {
        for (i=0;i<nr-1;i++) {
            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
            permutation(v, nr);
	}
    }
    return 0;
}
