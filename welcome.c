#include<conio.h>
#include<stdio.h>
int add(int,int);
main()
{
   int x,y,s;
   printf("enter two numbers");
   scanf("%d%d",&x,&y);
   s=add(x,y);
   printf("Sum is %d",s);
   getch();
}
int add(int a,int b)
{
   int c;
   c=a+b;
   return c;
}


