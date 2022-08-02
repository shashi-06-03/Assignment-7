//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
     int no, copy, re,n=0,ans=0;
     printf("Enter a number :\n");
     scanf("%d",&no);
     copy=no;
     while(copy!=0)
     {
         copy=copy/10;

         n++;
     }
     copy=no;
     while(copy!=0)
     {
         re=copy%10;
         ans=ans+pow(re,n);
         copy=copy/10;
     }
     if(ans==no)
     {
         printf("%d IS AN ARMSTRONG NUMBER",no);
     }
     else
     {
         printf("%d IS NOT AN ARMSTRONG NUMBER",no);
     }
     return 0;
 }
