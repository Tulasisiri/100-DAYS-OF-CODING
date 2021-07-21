#include<stdio.h>
int main()
{
   int n;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   if(n>0)
    printf("%d is a positive integer",n);
   else if(n<0)
    printf("%d is a negative integer",n);
   else
    printf("val of n is zero");
   return 0;
}
