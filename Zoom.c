#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


/**
        #.Probably you may used the .ZOOM tool.
        #.It is not those type of .ZOOM.
        #It is a fun.ZOOM with C.
**/


main()
{
    int i,n=1,x,j;
    char choice[2],ss[170];


    for(;;){
            for(i=1;i<n;i++){
                ss[i-1]=' ';
            }
            ss[i-1]='\0';


            system("cls");
        for(i=0;i<20;i++){
            if(i%n==0){
            for(j=0;j<70/n;j++){
                printf("%s*",ss);
            }
            }
            printf("\n");
        }
        choice[0]=getch();
        if(choice[0]==43){
            if(n<19)
                n++;
        }

        else if(choice[0]==45){
            if(n>1)
                n--;
        }
        else
            continue;
    }
}
///##MD. SOZIB HOSSAIN
