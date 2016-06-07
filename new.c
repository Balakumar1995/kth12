#include <stdio.h>
int cmp(const void *x,const void *y)
{
    return (*(int*)x)-(*(int*)y);
}
int main()
{
    int k,l,b[10001],i;
    char a[10001];
    scanf("%s %d",a,&k);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        b[i]=a[i]-48;
    }
    qsort(b,l,sizeof(b[0]),cmp);
    for(i=0;i<l-k;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
