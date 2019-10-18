/*PROGRAM TO FIND GREATEST OF THREE NUMBERS
Author:Jinju Raju
Date:06/02/19*/
#include<stdio.h>
void main()
{
int num1,number2,number3,big;
printf("enter the three integer numbers");
scanf("%d%d%d",&num1,&number2,&number3);
big=num1;
if(big<number2)
	{
	big=number2;
	}
if(big<number3)
	{
	big=number3;
	}
printf("%d is greater than the three numbers %d,%d and%d",big,num1,number2,number3);
}
