#include<stdio.h>
int main()
{
    int n,r,a,b,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        r=n*i;
        printf("%d x %d = %d
",n,i,r);
    }
}