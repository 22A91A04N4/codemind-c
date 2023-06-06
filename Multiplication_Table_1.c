#include<stdio.h>
int main()
{
    int a,b,i,x;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        x=a*i;
        printf("%d x %d = %d
",a,i,x);
    }
}