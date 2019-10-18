/*PROGRAM TO receive an integer and find its octal equivalent.
AUTHOR:JIJNU RAJU
DATE:5/03/19*/
#include<stdio.h>
void main()
{
int num,reminder,sum=0,new,last=0;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
	{
	reminder=num%8;
	sum=(sum*10)+reminder;
	num=num/8;
	}
while(sum>0)
	{
	reminder=sum%10;
	last=(last*10)+reminder;
	sum=sum/10;
	}
printf("%d\n",last);
}
