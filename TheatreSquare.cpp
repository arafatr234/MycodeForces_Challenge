#include<stdio.h>
#include<stdlib.h>
int n,m,a;
int main()
{
    __int64 i,j;
    scanf("%d%d%d",&n,&m,&a);
    i=n/a;
    j=m/a;
    if(a*i!=n)
    i++;
    if(j*a!=m)
    j++;
    printf("%I64d",i*j);
    return 0;
}