#include<stdio.h>
int main()
{
    int m,n,h,i;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if (n%i==0&&m%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
    return 0;
}