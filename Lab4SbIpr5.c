#include<stdio.h>
int main()
    {

        int i;

        for(i=2;i<=60;i=i+2)        //a) using a for loop
        {

            printf("%d",i);
            printf("\n");

        }



        i=2;

        while(i<=60)                //b)using a while loop
        {

            printf("%d",i);
            printf("\n");
            i=i+2;

        }


        i=2;

        do                          //c)using a do while loop

        {

            printf("%d",i);
            printf("\n");
            i=i+2;

        }

        while(i<=60);




    }
