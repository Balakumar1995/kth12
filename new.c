#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cumfun(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

main()
{
int arr[10001],number,i,k,l,fg=0;
char str[10001];
scanf("%s",str);
scanf("%d",&k);
l=strlen(str);
for(i=0;i<l;i++)
	arr[i]=(int)str[i]%48;
qsort(arr,l,sizeof(long long int), cumfun);
for(i=0;i<l-k;i++)
{
if(arr[i]!=0){
printf("%d",arr[i]);
fg=1;}
if(arr[i]==0&&fg==0)
	fg=0;
}
if(fg==0)
printf("0");
return 0;
}
