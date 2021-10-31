/*PROGRAM TO FIND REVERSE OF A NUMBER
AUTHOR:JIJNU RAJU
DATE:13/02/19*/
#include<stdio.h>
void main()
{
	int num,t,reverse=0,copy,i;
	printf("enter a number to  reverse");
	scanf("%d",&num);
	copy=num;
for(i=0;num>0;i++)
	{
	t=num%10;
	reverse=(reverse*10)+t;
	num=num/10;
	}
printf("the reverse of the number %d is %d",copy,reverse);
}
