//1. Write a program to find the Nth term of the Fibonacci series.
#include<stdio.h>
 int main()
 {
     int pre=0,cur=1,next=0,n;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     for(int i=1;i<n;i++)
     {
         next=pre+cur;
         pre=cur;
         cur=next;
     }
     printf("%d",next);
     return 0;
 }
