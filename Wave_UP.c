#include<stdio.h>
#include<math.h>
/**
        Requirement : console text = 8-10 px
                      console window : maximum
**/


main()
{
    int i,j,k,n,l=2;

    for(l=2;;l++){
            if(i<5)
               i++;
            else
                i=2;
            n=pow(i,2);
        for(j=0;j<=n/2;j++){
            for(k=80;k>0;k--){
        if(k<=40+j*2 && k>=40-j*2)
            printf("*");
        else
            printf(" ");

            }
            printf("\n");
        }
    }
}
