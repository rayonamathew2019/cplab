/*PROGRAM TO FIND REVERSE OF A NUMBER
AUTHOR:JIJNU RAJU
DATE:13/02/19*/
#include<stdio.h>
void main()
{
	int number,t,r=0,copy,i;
	printf("enter the number to be reversed");
	scanf("%d",&number);
	copy=number;
for(i=0;number>0;i++)
	{
	t=number%10;
	r=(r*10)+t;
	number=number/10;
	}
printf("the reverse of the number %d is %d",copy,r);
}
