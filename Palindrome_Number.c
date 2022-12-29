#include<stdio.h>
int main()
{
    int i,ni;
    scanf("%d",&ni);
    for(i=1;i<=ni;i++)
    {
        int n,r,q,s=0;
        scanf("%d",&n);
        q=n;
        while(q!=0)
        {
        r=q%10;
        q=q/10;
        s=s*10+r;
        }
     if(n==s)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}