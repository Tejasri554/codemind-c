#include<stdio.h>
int main()
{
    int i=0,n,d[100],j,k;
    scanf("%d",&n);
    while (n>0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    for (j=i-1;j>=0;j--)
    {
        if (d[j]==6)
        {
            d[j]=9;
            break;
        }
    }
    for(k=i-1;k>=0;k--)
    {
        printf("%d",d[k]);
    }
}