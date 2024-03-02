#include<stdio.h>
int fact(int n);

int fact(int n){
if(n==0){
    return 0;
}
else if(n==1){
    return 1;
}
else {
    return n*fact(n-1); }
}

int main(){
    int n;
   printf("enter the value of n::");
   scanf("%d",&n);

   printf("the factorial of %d is %d",n,fact(n));
   return 0;
}
