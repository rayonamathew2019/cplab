/*PROGRAM TO print the multiplication table of the number entered by the user. the table should get displayed  
AUTHOR:JIJNU RAJU
DATE:5/03/19*/
#include<stdio.h>
void main()
{
int value,i=1,prod;
printf("enter the value");
scanf("%d",&value);
for(i=1;i<=10;i++)
	{
	prod=value*i;
	printf("%d*%d=%d\n",value,i,prod);
	}
}
