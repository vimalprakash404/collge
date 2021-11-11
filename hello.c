#include<stdio.h>
void main()
{
        int a=100;
        int *f ;
        f=&a;
        printf("A: %p",&a);
        printf("\n f is %d %ls",*f,f);
        printf("Address stored in a variable p is:%p\n",f);
}
