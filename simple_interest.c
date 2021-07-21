#include<stdio.h>
int main()
{
   int P,T;
   float R,simple_interest;
   printf("Enter the value of P,R,T: ");
   scanf("%d%d%f",&P,&T,&R);
   simple_interest = P*T*R/100;
   printf("The value of simple interest is %f ",simple_interest);
   return 0;
}
