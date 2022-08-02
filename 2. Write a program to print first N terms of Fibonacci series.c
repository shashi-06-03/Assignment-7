//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int prev=0,cur=1,next=0,n;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     printf("1 ");
     for(int i=0;i<n-1;i++)
     {
         next=prev+cur;
         printf("%d ",next);
         prev=cur;
         cur=next;
     }
     return 0;
 }
