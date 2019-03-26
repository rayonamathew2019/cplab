/*PROGRAM TO receive an integer and find its octal equivalent.
AUTHOR:JIJNU RAJU
DATE:5/03/19*/
#include<stdio.h>
void main()
{
int number,reminder,sum=0,new,last=0;
printf("enter the number");
scanf("%d",&number);
while(number!=0)
	{
	reminder=number%8;
	sum=(sum*10)+reminder;
	number=number/8;
	}
while(sum>0)
	{
	reminder=sum%10;
	last=(last*10)+reminder;
	sum=sum/10;
	}
printf("%d\n",last);
}
