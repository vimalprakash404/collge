#include<stdio.h>
int n=10;
int q[3];
 int f=-1,r=-1,ch;
void enqueu()
{
    if(r==n-1)
    {
        printf("queue overflow");
        return;
    }
    printf("enter value to inseart");
    int val;
    scanf("%d",&val);
    if(f==-1&&r==-1)
    {
        f=0;r=0;
        q[r]=val;
    }
    else
    {
        r++;
        q[r]=val;
    }
    
}
void dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("queue underflow\n");
        return;
    }
    q[f]=NULL;
    if(f==r)
       { f=-1;r=-1;}
    else
        f++;
}
void display()
{
    if(f==-1&&r==-1)
        printf("queue is empty");
        return;
    for(int i=f;i<=r;i++)
    {
        printf("q[%d]:%d\n",i,q[i]);
    }
}
void main()
{
int exiter=1;

    do
    {
        printf("Please select your options \n1)dequeu \n2)enqueue \n3)show \n4)exit");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            dequeue();
            break;
        case 2:
            enqueu();
            break;
        case 3:
            display();
            break;
        case 4:
            exiter=0;
        }
    } while (exiter);

}

