#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    scanf("%[^
]s",str);
    if(str[1]!=0&&strlen(str)==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}