#include<stdio.h>
int q[10];
int f=-1,r=-1;
void enqueue();
void dequeue();
void display();
void main()
{
    int exiter=1,ch;
    
    do
    {printf("Please enter your choice \n1)enqueue\n2)dequeue\n3)show4)exit");
    scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exiter=0;
            break;
        }
    }while (exiter);
    

}
void enqueue()
{
   
    if(f==(r+1)%10)
    {
      printf("overflow");
      return;  
    }
     printf("enter value to inseart");
    int val;
    scanf("%d",&val);
    if(r==-1&&f==-1)
    {
        f=r=0;
        q[r]=val;
    }
    else
    {
        r=(r+1)%10;
        q[r]=val;
    }
}
void dequeue()
{
 if(f==-1&&r==-1)
 {
    printf("under flow");
    return;
 }
 q[f]=NULL;
 if(r==f)
 {
     r=f=-1;
 }
 else
 {
     f=(f+1)%10;
 }
}
void display()
{
    if(f==-1&&r==-1)
    {
        printf("queue is under flow");
    }
    else{
        for(int i=f;(i+1)%10!=r;i=(i+1)%10)
        {
            printf("q[%d]:%d\n",i,q[i]);
        }
    }
}