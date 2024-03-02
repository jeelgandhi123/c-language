#include<stdio.h>
void main(){
  int a,b,c,d,e,f;

  printf("enter the value of a:");//taking 1st oprand
  scanf("%d",&a);

  printf("enter the value of b:");//taking 2nd oprand
  scanf("%d",&b);

  //arithmatic operator:::+,-,/,*
  c=a+b;
  printf("\nthe sum of %d and %d is %d\n",a,b,c);//sum

  d=a*b;
  printf("the multiplication of %d and %d is %d\n",a,b,d);//multiplication

  e=a/b;
  printf("the division of %d and %d is %d\n",a,b,e);//division

  f=a-b;
  printf("the substraction of %d and %d is %d\n\n",a,b,f);//substraction

  //relational operation:::==,>=,>,<=,<
  if(a==b){
    printf("the value of a abd b is same!!");
  }
  else if(a>b){
    printf("%d is larger than %d",a,b);
  }
  else{
    printf("%d is larger than %d",b,a);
  }
  //assignment operator
  a+=1;//here the value of a look like a=a+1 increment:::
  printf("\n\nthe value of a is %d",a);

  b-=1;
  printf("\nthe value of b is %d\n",b);

  //logical operator
  printf("ans:%d\n",a>b&&a<b);
  printf("ans:%d\n",a>b||a<b);


  //ternery operator
  (a>b)?printf("the %d is higher",a):printf("the %d is higher",b);

  }
