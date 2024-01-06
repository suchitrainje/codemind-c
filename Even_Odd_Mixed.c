#include<stdio.h>
int main()
{
    int n,ds=0,c=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds=ds+1;
        if(r%2==0)
        {
            c+=1;
        }
        n=n/10;
    }
    if(ds==c)
    {
        printf("Even");
    }
    else if(c<ds && c!=0)
    {
        printf("Mixed");
    }
    else if(c==0)
    {
        printf("Odd");
    }
}