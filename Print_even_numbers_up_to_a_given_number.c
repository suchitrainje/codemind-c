#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b;i=i+1)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}