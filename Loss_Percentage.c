#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    float loss =cp-sp;
    printf("%.2f",loss/cp*100);
}