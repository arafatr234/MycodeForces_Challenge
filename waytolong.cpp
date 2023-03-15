#include<stdio.h>
#include<stdlib.h>
int n,I;
int a[200];
int main()
{
    int i,j,len;
    scanf("%d\n",&n);
    for(I=1;I<=n;I++)
    {
        for(i=1;;i++)
        {
            scanf("%c",&a[i]);
            if(a[i]>='a'&&a[i]<='z')
            continue;
            break;
        }
        len=i-1;
        if(len<=10)
        {
            for(j=1;j<=len;j++)
            {
                printf("%c",a[j]);
            }
            printf("\n");
            continue;
        }
        printf("%c%d%c\n",a[1],len-2,a[len]);
    }
    return 0;
}