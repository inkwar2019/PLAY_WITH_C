#include<stdio.h>

/**
        Requirement : console text = 8-10 px
                      console window : maximum
**/


main()
{
    int i,j,k,l,m,n,x=0;
    for(;;){
    for(i=0;i<=20;i++){
        for(j=540;j>=0;j--){
            if(j==270 && i==10)
                printf("%c",219);
            if(((j<=475+(i*2) && j>=475-(i*2)) || (j<=75+(i*2) && j>=75-(i*2))) && i<=10)
                    printf("%c",219);
            else if(((j<=485 && j>=465) || (j<=85 && j>=65)) && i>10)
                printf("%c",219);
            else
                printf(" ");
        }
        printf(" \n");

    }
    x+=21;
    }
}
