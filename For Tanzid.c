#include<stdio.h>

/**
        Requirement : console text = 8-10 px
                      console window : maximum
**/


int main()
{
    int i,j,a,b,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n*2;j>=1;j--){
            if(j<=((n*2)-i) && j>=i && i%2==0 && j%2==0)
                printf("*");
            else if(j<=((n*2)-i) && j>=i && i%2!=0 && j%2!=0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
