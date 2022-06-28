#include<stdio.h>
int main()
{
    int temp=0,s=0,c=0,i,n,r;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    {
        while(n>0)
        {
            s=0;
            r=n%10;
            for(i=2;i<r;i++)
            {
                if(r%i==0)
                s++;
            }
            if (r==1)
            temp++;
            n=n/10;
        }
    }
    if (c==0 &&s==0&&temp!=1)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
    return 0;
}