#include<stdio.h>

/**
        Requirement : console text = 8-10 px
                      console window : maximum
**/


int main()
{
    int i,j;
    char ss[1000];
    for(;;){
        for(j=100;j>=0;j=j-2){
        for(i=0;i<=j;i++){
            ss[i]='X';
        }
        ss[i]='\0';
        for(i=1;i<=15;i++){

        printf("%sX\n",ss);
        }
        }
        for(j=0;j<=100;j=j+2){
        for(i=0;i<=j;i++){
            ss[i]='X';
        }
        ss[i]='\0';
        for(i=1;i<=15;i++){

        printf("%sX\n",ss);
        }
        }
    }
    return 0;
}
