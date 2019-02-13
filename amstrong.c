/*PROGRAM TO FIND WEATHER A NUMBER IS AMSTRONG OR NOT
AUTHOR:JIJNU RAJU
DATE:13/02/19*/
#include<stdio.h>
void main()
{
int amstrong=0,number,copy,i,reminder;
printf("enter the number");
scanf("%d",&number);
copy=number;
for(i=0;number>0;i++)
	{
	reminder=number%10;
	amstrong=amstrong+(reminder*reminder*reminder);
	number=number/10;
	}
if(amstrong==copy)
	{
	printf("%d is amstrong",copy);
	}
else
	{
	printf("%d is not amstrong",copy);
	}
}
