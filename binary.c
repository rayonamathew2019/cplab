/*PROGRAM TO Write a function to find the binary equivalent of a given decimal integer
AUTHOR:JIJNU RAJU
DATE:20/02/19*/
#include<stdio.h>
float binary(int a);
void main()
{
int b;
float c;
printf("enter a decimal integer");
scanf("%d",&b);
c=binary(b);
printf("the binary equivalent of %d is %f",b,c);
}
float binary(int a)
{
int reminder;
float sum=0;
while(a!=0)
	{
	reminder=a%2;
	sum=(sum*10)+reminder;
	a=a/2;
	}
return sum;
}

