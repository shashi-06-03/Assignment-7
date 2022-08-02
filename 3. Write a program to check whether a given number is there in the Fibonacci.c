//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<stdio.h>
int main()
{
    int next=0,prev=0,cur=1,n;
    printf("ENTER THE VALUE OF N\n");
    scanf("%d",&n);
    for(int i=0; 1 ;i++)

    {
        next=prev+cur;
        prev=cur;
        cur=next;
        if(next==n)
           {
            printf("FIBONACCI SERIES NO.");
            break;
           }
        if(next>n)
        {

            printf("NO. NOT IN FIBONACCI SERIES");
            break;
        }
    }
        return 0;

}
