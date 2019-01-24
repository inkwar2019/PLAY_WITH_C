#include<stdio.h>

/**
        Requirement : console text = 8-10 px
                      console window : maximum
**/


int main()
{
    int i,j,k;
    char ss[200];
    srand(time(NULL));
        for(;;){
            k=rand()%167;
        for(i=0;i<=k;i++){
                ss[i]=' ';
        }
        ss[i]='\0';
        for(i=0;i<30;i++){
        if(i==0)
             printf("%s    X\n");
        else if(i==1)
             printf("%s   XXX\n");
        else if(i==2)
             printf("%s  XXXXX\n");
        else if(i==3)
             printf("%s XXXXXXX\n");
        else if(i==4)
             printf("%sXXXXXXXXX\n");
        else
            printf("%s   XXX\n",ss);
        }
        }
    return 0;
}

