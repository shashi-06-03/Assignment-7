//7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,n,flag=0,a,b;
    printf("ENTER RANGE :");
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d\n",n);
    }
    return 0;
}
