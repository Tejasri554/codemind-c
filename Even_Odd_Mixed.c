#include<stdio.h>
int main()
{
    int n,d,t,c=0,k=0,s=0,e;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
        if(d%2==0)
        {
            k++;
        }
        if(d%2!=0)
        {
            s++;
        }
    }
    e=s+k;
    if(c==k)
    {
        printf("Even");
    }
    else if(c==s)
    {
        printf("Odd");
    }
    else if(c==e)
    {
        printf("Mixed");
    }
}