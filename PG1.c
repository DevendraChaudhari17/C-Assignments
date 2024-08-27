#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    if(argc<2)
    {
        printf("insufficient argc");
        return 1;
    }

int max,no;
max=0;
    for(int i=1;i<argc;i++)
    {
        no=atoi(argv[i]);
         if(no>max)
         max=no;
    }
    printf("Maximum no=%d",max);
}