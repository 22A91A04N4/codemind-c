#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d%d%d",&t,&x,&y);
    if(t>(x*1)+(y*2))
    {
        printf("Not Qualify");
    }
    else
    {
        printf("Qualify");
    }
}