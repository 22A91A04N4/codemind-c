#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int area=((l+2*w)*(b+2*w))-(l*b);
    int tc=c*area;
    printf("%d",tc);
}