#include<stdio.h>
int main()
{
    float fahr,cels;
    scanf("%f",&fahr);
    cels=(fahr-32)*5/9;
    printf("%.2f",cels);
}