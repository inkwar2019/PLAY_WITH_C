#include<stdio.h>

/**
        Requirement : console text = 8-10 px
                      console window : maximum
**/


int x;
void show();
main()
{

    for(;;){
        system("cls");
        show();
    if(x<500)
        x+=10;
    else
        x=-80;
    }
}
void show()
{
    int i,j,k,l,m,n;
    for(i=0;i<=50;i++){
        for(j=500;j>=0;j--){
            if(j<=50+i+x && j>=50+x && i<=15)
                printf("%c",219);
            else if(j<=50+i+x && j>=0+x && i>15 && i<=25)
                printf("%c",219);
            else if(j<=75-(i-25)+x && j>=0+x && i>25 && i<=35)
                printf("%c",219);
            else if(j<=75-(i-25)+x &&  j>=50+x && i>35)
                printf("%c",219);
            else
                printf(" ");
        }
        printf(" \n");
    }
}
