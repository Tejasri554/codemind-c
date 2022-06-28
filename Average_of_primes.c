#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,temp,i,j,m=0,s=0;
    scanf("%d",&n);
    float avg;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            continue;
        }
        else
        {
            c=0;
            temp=arr[i];
            for(j=2;j<temp;j++)
            {
                if(temp%j==0)
                {
                    c++;
                }
            }
            if(c==0)
            {
                s=s+temp;
                m=m+1;
            }
        }
    }
    avg=(float)s/m;
    printf("%.2f",avg);
    return 0;
}