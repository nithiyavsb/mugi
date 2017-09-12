#include<stdio.h>
int main()
{
int k,count=0;
scanf("%d",&k);
while(k>0)
{
k=k%10;
++count;
k=k/10;
}
printf("the no of digits are %d",count);
}
