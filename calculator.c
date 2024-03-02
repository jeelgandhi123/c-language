#include<stdio.h>
void main(){
  int a,b,c,d,e,f;

  printf("enter the value of a:");//taking 1st oprand
  scanf("%d",&a);

  printf("enter the value of b:");//taking 2nd oprand
  scanf("%d",&b);

  c=a+b;
  printf("the sum of %d and %d is %d\n",a,b,c);//sum

  d=a*b;
  printf("the multiplication of %d and %d is %d\n",a,b,d);

  e=a/b;
  printf("the division of %d and %d is %d\n",a,b,e);

  f=a-b;
  printf("the substraction of %d and %d is %d\n",a,b,f);
  }

