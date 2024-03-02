#include<stdio.h>
void main(){
  int a,b,c;

  printf("enter the value of a:");//taking 1st oprand
  scanf("%d",&a);

  printf("enter the value of b:");//taking 2nd oprand
  scanf("%d",&b);

  printf("enter the value of c:");//taking 3nd oprand
  scanf("%d",&c);

  if(a>b){
    if(a>c){
        printf("the value of %d is grater than %d and %d",a,b,c);
    }
    else{
        printf("the value of %d is grater than %d and %d",c,a,b);
    }
  }

  else if(b>a){
    if(b>c){
        printf("the value of %d is grater than %d and %d",b,a,c);
    }
    else{
        printf("the value of %d is grater than %d and %d",c,a,b);
    }
  }

  else{
    printf("the all values are same!!");
  }
  }

