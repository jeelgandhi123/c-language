#include<stdio.h>
void main(){
  int a,b,c;
  float d,e,f;
  char g,h,i;

  printf("enter the value of a,b and c::");//taking input from user for int
  scanf("%d %d %d",&a,&b,&c);

  printf("enter the value of d,e and f::");//taking input from user for float
  scanf("%f %f %f",&d,&e,&f);

  printf("enter the value of g,h and i::");//taking input from user for char
  scanf("%c %c %c",&g,&h,&i);


  printf("the value of a,b,c,d,e,f,g,h,i is %d %d %d %f %f %f %c %c %c",a,b,c,d,e,f,g,h,i);
  }

