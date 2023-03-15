#include<stdio.h>
#include<stdlib.h>
int n,k;
int a[60];
int sort[200];
int ans;
int comp(const void *q1,const void *q2)
{
    int *p1,*p2;
    p1=(int *)q1;
    p2=(int *)q2;
    return p1-p2;
}
int main()
{
    int i,j;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(&a[1],n,sizeof(int),comp);
    for(i=1;i<=n;i++)
    {
        sort[a[i]]++;
    }
    for(i=a[k];i<=110;i++)
    {
        if(i>0)
        ans+=sort[i];
    }
    printf("%d",ans);
    return 0;
}