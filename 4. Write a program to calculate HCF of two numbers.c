//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
 int main()
 {
     int a, b,i;
     printf("ENTER ANY TWO  NUMBERS\n");
     scanf("%d%d",&a,&b);
     for(i=1;i<=a*b;i++)
     {
         if((i%a==0) && (i%b==0))
         {
             break;
         }
     }
     printf("HCF =%d",((a*b)/i));
     return 0;

 }

