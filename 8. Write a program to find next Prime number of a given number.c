//8. Write a program to find next Prime number of a given number
#include<stdio.h>
 int main()
 {
     int i, n,a=0;
     printf("Enter a number\n");
     scanf("%d",&n);
     a=0;
     for(i=n;1;n++)
     {
         a=0;
         for(i=2;i<=n/2;i++)
         {
            if(n%i==0)
            a=1;
         }

     if(a==0)
     {
      printf("%d",n);
      break;
     }
     }
     return 0;
 }
